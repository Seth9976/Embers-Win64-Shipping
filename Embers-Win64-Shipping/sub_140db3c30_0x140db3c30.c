// 函数: sub_140db3c30
// 地址: 0x140db3c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d9bab0(arg3)
char result = sub_140dbe040(arg1)

if (result == 0)
    void* rax = sub_140d99610(arg1)
    void*** rcx_2
    
    if ((*(rax + 0x50) & 1) == 0)
        rcx_2 = (*(arg1 + 0x18) + 0xf) & 0xfffffffffffffff0
        void* rax_2 = &rcx_2[6]
        
        if (rax_2 u> *(arg1 + 0x20))
            sub_140b0e3d0(arg1 + 0x18, 0x40)
            rcx_2 = (*(arg1 + 0x18) + 0xf) & 0xfffffffffffffff0
            rax_2 = &rcx_2[6]
        
        *(arg1 + 0x18) = rax_2
        rcx_2[1] = 0
        *(rcx_2 + 0x14) = 0
        rcx_2[3] = 0
        *(rcx_2 + 0x24) = 0
        *(rcx_2 + 0x2c) = 0
        *rcx_2 = &data_142ec2878
        *(rcx_2 + 0x1c) = 0x3f800000
        rcx_2[2] = 0
    else
        void*** rax_1 = j_sub_140a82f30(0x30)
        rcx_2 = rax_1
        
        if (rax_1 == 0)
            rcx_2 = rax_1
        else
            *rax_1 = &data_142ec2878
            rcx_2[3].d = 0
            *(rcx_2 + 0x1c) = 0x3f800000
            rcx_2[2] = 0
    
    *rax = rcx_2
    rcx_2[4].d = arg5
    *(rcx_2 + 0x10) = *arg4
    *(rax + 8) = *(arg3 + 0x1c)
    *(rax + 0x18) = *(arg3 + 0x2c)
    *(rax + 0x20) = *arg3
    *(rax + 0x48) = arg3[1].d
    *(rax + 0x28) = *(arg3 + 0x14)
    int64_t rax_5 = sx.q(*(arg1 + 0xb0))
    int32_t rdx
    
    if (rax_5.d s<= 0)
        rdx = -1
    else
        rdx = *(*(arg1 + 0xa8) + (rax_5 << 2) - 4)
    
    *(rax + 0x40) = rdx
    *(rax + 0x30) = arg2
    *(rax + 0x4d) = 0xb00
    int64_t* rcx_9 = *(data_143e20d08 + 0x20)
    result = (*(*rcx_9 + 0x148))(rcx_9)
    *(rax + 0x4c) = result
    *(rax + 0x4f) = 0

return result
