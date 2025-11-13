// 函数: sub_14281f344
// 地址: 0x14281f344
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i_1 = arg2
class std::wostream* rcx = arg1[3]
class std::wostream* result
int64_t* r14

if (rcx == 0)
    int64_t r9_1 = *arg1
    r14 = &arg2[2]
    int64_t rdx_3 = arg1[4] + 1 + *r14
    int64_t r8_2 = arg1[1] - r9_1
    int64_t rcx_1 = r8_2
    
    if (r8_2 u< rdx_3)
        rcx_1 = rdx_3
    
    if (rcx_1 u< r8_2)
        arg1[1] = r9_1 + rcx_1
    else if (rcx_1 u> r8_2)
        if (rcx_1 u<= arg1[2] - r9_1)
            arg1[1] = sub_14281f244(arg1[1], rcx_1 - r8_2)
        else
            sub_14281f11c(arg1, rcx_1)
    
    int64_t* i_2 = i_1
    int64_t rbx_2 = arg1[4] + *arg1
    
    if (i_1[3] u>= 0x10)
        i_2 = *i_1
    
    int64_t rax_4 = sub_14058e700(i_2)
    int64_t* i_3 = i_1
    
    if (i_1[3] u>= 0x10)
        i_3 = *i_1
    
    result = std::_Uninitialized_move<uint64_t* __ptr64,class std::allocator<uint64_t> >(
        sub_14058e700(i_3), *r14 + rax_4, rbx_2)
else
    if (arg2[3] u>= 0x10)
        arg2 = *arg2
    
    r14 = &i_1[2]
    result = std::ostream::write(rcx, arg2, *r14)

int64_t* i = i_1

if (i_1[3] u>= 0x10)
    i = *i_1
    i_1 = i

for (void* rdi = i_1 + *r14; i != rdi; i += 1)
    sub_14281f328(arg1, *i)

return result
