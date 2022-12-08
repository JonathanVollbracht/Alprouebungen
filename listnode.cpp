#include <datenstrukturen/listnode.hpp>
#include <memory>

namespace Datenstrukturen {
	ListNode::ListNode(int data)
	{
		data_ = data;
		next = nullptr;
	}
}