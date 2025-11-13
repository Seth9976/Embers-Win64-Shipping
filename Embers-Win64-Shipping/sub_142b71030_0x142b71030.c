// 函数: sub_142b71030
// 地址: 0x142b71030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg3 s> 0)
    return 0

int64_t* rcx = *(arg1 + 8)
int64_t* result_2 = nullptr
int32_t var_40 = arg2 + 0x2777775
int32_t var_3c = 0
struct icu_64::UObject::VTable* var_48 =
    &icu_64::StringTrieBuilder::FinalValueNode::`vftable'{for `icu_64::StringTrieBuilder::Node'}
int32_t var_38 = arg2
int32_t* rax_1 = sub_142a86bf0(rcx, &var_48)
int64_t* result

if (rax_1 == 0)
    struct icu_64::StringTrieBuilder::Node::icu_64::StringTrieBuilder::FinalValueNode::VTable** 
        result_1 = j_sub_142a7dd00(0x18)
    struct icu_64::StringTrieBuilder::Node::icu_64::StringTrieBuilder::FinalValueNode::VTable** 
        result_3 = result_1
    result = result_1
    
    if (result_1 == 0)
        *arg3 = 7
        result = result_2
    else
        result_1[1].d = arg2 + 0x2777775
        *(result_1 + 0xc) = 0
        *result_1 = &icu_64::StringTrieBuilder::FinalValueNode::`vftable'{for `icu_64::StringTrieBuilder::Node'}
        result_1[2].d = arg2
        sub_142a86f70(*(arg1 + 8), result_1, 1, arg3)
        
        if (*arg3 s> 0)
            (**result)(result, 1)
            result = result_2
else
    result = *(rax_1 + 0x10)

sub_142a47900(&var_48)
return result
