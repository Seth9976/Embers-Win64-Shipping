// 函数: sub_14259bad0
// 地址: 0x14259bad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* r14 = arg2
void* result

if (arg4 != 0)
    int128_t* rdi_1 = arg3 + 0xa8
    int32_t i
    
    do
        void* rbx_1 = r14
        r14 += 0x160
        sub_141c213f0(rbx_1, rdi_1 - 0xa8)
        sub_141c212a0(rbx_1 + 0x58, &rdi_1[-5])
        *(rbx_1 + 0xa8) = *rdi_1
        *(rbx_1 + 0xb8) = rdi_1[1].d
        result = *(rdi_1 + 0x18)
        int64_t* rcx_2 = *(rbx_1 + 0xc0)
        *(rbx_1 + 0xc0) = result
        
        if (result != 0)
            *(result + 0x68) += 1
        
        if (rcx_2 != 0)
            sub_141f6f0d0(rcx_2)
        
        void* rcx_3 = rdi_1[2].q
        int64_t* rsi_1 = *(rbx_1 + 0xc8)
        *(rbx_1 + 0xc8) = rcx_3
        
        if (rcx_3 != 0)
            sub_1422b8cc0(rcx_3)
        
        if (rsi_1 != 0)
            sub_1422ce7f0(rsi_1)
        
        *(rbx_1 + 0xd0) = *(rdi_1 + 0x28)
        *(rbx_1 + 0xe0) = *(rdi_1 + 0x38)
        *(rbx_1 + 0xf0) = *(rdi_1 + 0x48)
        *(rbx_1 + 0x100) = *(rdi_1 + 0x58)
        *(rbx_1 + 0x110) = *(rdi_1 + 0x68)
        *(rbx_1 + 0x120) = *(rdi_1 + 0x78)
        *(rbx_1 + 0x130) = *(rdi_1 + 0x88)
        *(rbx_1 + 0x140) = *(rdi_1 + 0x98)
        int128_t zmm0_1 = *(rdi_1 + 0xa8)
        rdi_1 = &rdi_1[0x16]
        *(rbx_1 + 0x150) = zmm0_1
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
