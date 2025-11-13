// 函数: sub_141d7fe00
// 地址: 0x141d7fe00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(*(arg1 + 0x10))
int64_t rdi = 0
int64_t rsi = *(arg1 + 8)
uint64_t r14 = 0
int128_t zmm6 = arg2
uint64_t var_28 = 0
int32_t var_20 = rbx.d

if (rbx.d != 0)
    sub_1405c4a00(&var_28, rbx.d, 0)
    r14 = var_28
    memcpy(r14, rsi, (rbx << 3).d)
    rbx = zx.q(var_20)

int64_t result = sx.q(rbx.d)
uint64_t rsi_1 = r14
int64_t rcx_2 = r14 + (result << 3)
uint64_t rbp_3 = (rcx_2 - r14 + 7) u>> 3

if (r14 u> rcx_2)
    rbp_3 = 0

if (rbp_3 != 0)
    do
        int64_t* rbx_1 = *rsi_1
        int32_t rdx_3
        
        if (rbx_1[0x28].b == 0)
        label_141d7fef0:
            rdx_3 = (data_143de5458).d
        label_141d7fef7:
            int64_t* rcx_6 = rbx_1[0xd]
            
            if (rcx_6 != 0)
                *((zx.q(rdx_3 - 1) & 1) + rcx_6 + 0x51) = 0
                (*(*rcx_6 + 0x268))()
                rdx_3 = (data_143de5458).d
            
            int64_t* rcx_7 = rbx_1[0xe]
            
            if (rcx_7 != 0)
                *((zx.q(rdx_3 - 1) & 1) + rcx_7 + 0x51) = 0
                (*(*rcx_7 + 0x268))()
            
            result = (*(*rbx_1 + 0x290))(rbx_1, zmm6)
            int64_t* rcx_9 = rbx_1[0xd]
            
            if (rcx_9 != 0)
                result = (*(*rcx_9 + 0x270))(rcx_9)
            
            int64_t* rcx_10 = rbx_1[0xe]
            
            if (rcx_10 != 0)
                result = (*(*rcx_10 + 0x270))(rcx_10)
        else
            rdx_3 = (data_143de5458).d
            int64_t* rcx_3 = rbx_1[0xd]
            
            if (*((zx.q(rdx_3) & 1) + rcx_3 + 0x51) != 0)
                goto label_141d7fef7
            
            if ((*(*rcx_3 + 0x2a0))(rcx_3) == 0)
                goto label_141d7fef0
            
            rdx_3 = (data_143de5458).d
            int64_t* rcx_4 = rbx_1[0xe]
            
            if (*((zx.q(rdx_3) & 1) + rcx_4 + 0x51) != 0)
                goto label_141d7fef7
            
            if ((*(*rcx_4 + 0x2a0))(rcx_4) == 0)
                goto label_141d7fef0
            
            result, zmm6 = sub_141d789d0(rbx_1)
        rsi_1 += 8
        rdi += 1
    while (rdi != rbp_3)

if (r14 == 0)
    return result

return sub_140a74f90(r14)
