// 函数: sub_1410b7400
// 地址: 0x1410b7400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = arg2[8]
int64_t rbp = *(rdx + 0x1a0)
sub_141080ac0(arg1, rdx, rbp, *(*arg2 + 0x10))
int32_t var_38
sub_1410804a0(arg1 + 0x216, arg2[8], *arg2, rbp, arg3, 0, var_38)
j_sub_14137eb70(arg1 + 0x118, arg2[8], rbp, arg2, data_14395f4d0, 0, nullptr)
arg2[8]
char result = sub_14139bee0()
int64_t* r14 = data_1439b54b8
void* rbx_1 = arg2[8]
int64_t r12 = *(data_143ec4d30 + 0x10)

if (*(arg1 + 0x21e) u> 0)
    uint32_t r15_1 = zx.d(*(arg1 + 0x21c))
    void*** rcx_6 = (*(rbx_1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_1 = &rcx_6[5]
    
    if (rax_1 u> *(rbx_1 + 0x38))
        sub_140b0e3d0(rbx_1 + 0x30, 0x30)
        rcx_6 = (*(rbx_1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_1 = &rcx_6[5]
    
    *(rbx_1 + 0x30) = rax_1
    void**** rax_2 = *(rbx_1 + 8)
    *(rbx_1 + 0x14) += 1
    *rax_2 = rcx_6
    *(rbx_1 + 8) = &rcx_6[1]
    rcx_6[1] = 0
    result = 0x70
    rcx_6[3].d = r15_1
    *rcx_6 = &data_142d5a070
    rcx_6[2] = rbp
    rcx_6[4] = r12

if (*(arg1 + 0x222) u> 0)
    uint32_t rsi_1 = zx.d(*(arg1 + 0x220))
    result = (*(*r14 + 8))(r14)
    
    if (result == 0)
        void*** rcx_13 = (*(rbx_1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_5 = &rcx_13[5]
        
        if (rax_5 u> *(rbx_1 + 0x38))
            sub_140b0e3d0(rbx_1 + 0x30, 0x30)
            rcx_13 = (*(rbx_1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_5 = &rcx_13[5]
        
        *(rbx_1 + 0x30) = rax_5
        void**** rax_6 = *(rbx_1 + 8)
        *(rbx_1 + 0x14) += 1
        *rax_6 = rcx_13
        *(rbx_1 + 8) = &rcx_13[1]
        rcx_13[1] = 0
        result = -0x80
        *rcx_13 = &data_142d5a080
        rcx_13[2] = rbp
        rcx_13[3].d = rsi_1
        rcx_13[4] = r14

return result
