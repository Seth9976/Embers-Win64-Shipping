// 函数: sub_142b70c80
// 地址: 0x142b70c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbp = arg5
int32_t rsi = arg2

if (*rbp s> 0)
    return 0

arg5.b = 0
int32_t var_34 = 0

if (arg4 == (*(*arg1 + 0x10))())
    int32_t rax_4 = (*(*arg1 + 0x20))(arg1, zx.q(rsi))
    rsi += 1
    var_34 = rax_4
    
    if (rsi == arg3)
        return sub_142b71030(arg1, rax_4, rbp) __tailcall
    
    arg5.b = 1

uint64_t r9_1 = zx.q(arg4)
uint64_t rdx_5 = zx.q(rsi)
bool cond:0 = zx.d((*(*arg1 + 0x18))(arg1, zx.q(rsi), zx.q(arg4)))
    != zx.d((*(*arg1 + 0x18))(arg1, zx.q(arg3 - 1), zx.q(arg4)))
int64_t rax_11 = *arg1
int64_t* rdi_4

if (cond:0)
    int32_t rax_20 = (*(rax_11 + 0x30))(arg1, rdx_5, zx.q(arg3), r9_1)
    int64_t* rax_21 = sub_142b70870(arg1, rsi, arg3, arg4, rax_20, rbp)
    struct icu_64::StringTrieBuilder::ValueNode::icu_64::StringTrieBuilder::BranchHeadNode::VTable**
         rax_22 = j_sub_142a7dd00(0x28)
    struct icu_64::StringTrieBuilder::ValueNode::icu_64::StringTrieBuilder::BranchHeadNode::VTable**
         var_28_1 = rax_22
    
    if (rax_22 == 0)
        rdi_4 = nullptr
    else
        rdi_4 = sub_142b701d0(rax_22, rax_20, rax_21)
else
    int32_t rax_12 = (*(rax_11 + 0x28))(arg1, rdx_5, zx.q(arg3 - 1), r9_1)
    int32_t var_30_1 = rax_12
    int32_t var_48
    var_48.q = rbp
    int64_t* rax_13 = sub_142b70c80(arg1, zx.q(rsi), zx.q(arg3), zx.q(rax_12), var_48)
    int64_t rdx_7 = *arg1
    int32_t i_1 = rax_12 - arg4
    int64_t* var_28 = rax_13
    int32_t rax_14 = (*(rdx_7 + 0x60))(arg1, rdx_7)
    
    for (int32_t i = i_1; i s> rax_14; i = i_1)
        int32_t rcx_11 = var_30_1 - rax_14
        var_30_1 = rcx_11
        var_48.q = var_28
        i_1 = i - rax_14
        var_28 = sub_142b71130(arg1, 
            (*(*arg1 + 0x68))(arg1, zx.q(rsi), zx.q(rcx_11), zx.q(rax_14), var_48), rbp)
    
    var_48.q = var_28
    rdi_4 = (*(*arg1 + 0x68))(arg1, zx.q(rsi), zx.q(arg4), zx.q(i_1), var_48)

if (arg5.b != 0 && rdi_4 != 0)
    if ((*(*arg1 + 0x48))(arg1) == 0)
        struct icu_64::StringTrieBuilder::ValueNode::icu_64::StringTrieBuilder::IntermediateValueNode::VTable
            ** rax_28 = j_sub_142a7dd00(0x20)
        arg5 = rax_28
        
        if (rax_28 == 0)
            rdi_4 = nullptr
        else
            rdi_4 = sub_142b70220(rax_28, var_34, sub_142b71130(arg1, rdi_4, rbp))
    else
        int32_t rax_26 = rdi_4[1].d * 0x25
        rdi_4[2].b = 1
        *(rdi_4 + 0x14) = var_34
        rdi_4[1].d = rax_26 + var_34

return sub_142b71130(arg1, rdi_4, rbp) __tailcall
