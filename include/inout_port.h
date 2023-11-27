#ifndef ARCHITECT_INOUT_PORT_H
#define ARCHITECT_INOUT_PORT_H

#include "specs/graph_spec.h"

namespace flow {

class Node;

class InoutPort {
public:
    InoutPort(std::weak_ptr<Node> node, InoutSpec spec);

    ~InoutPort() = default;

    void SetId(size_t id);

    std::string GetName() const;

    size_t GetId() const;

    std::string GetLinkName() const;

    std::shared_ptr<Node> GetBelongedNode() const;

    std::string GetDataType() const;

    bool IsOptional() const;

private:
    InoutSpec spec_;
    std::weak_ptr<Node> node_;
};

} // namespace flow


#endif // ARCHITECT_INOUT_PORT_H
