// 函数: sub_14222e9a0
// 地址: 0x14222e9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = nullptr
*(arg1 + 0x268) = 0
uint64_t rbx
rbx.b = arg2 != 0

if (arg2 == 0)
    sub_14222c330(arg1)
    *(arg1 + 0x8a) |= 1
else
    sub_14222eb60(arg1, &arg2[0x11], &arg2[0x13], &arg2[0x15])
    sub_14090a0d0(arg1 + 0xe0, &arg2[0x17])
    sub_140780bc0(arg1 + 0xf0, &arg2[0x19])
    
    if (arg1 + 0x100 != &arg2[0x1b])
        int32_t i_3 = *(arg1 + 0x108)
        int64_t* rbx_2 = *(arg1 + 0x100)
        
        if (i_3 != 0)
            int32_t i
            
            do
                int64_t rcx_2 = *rbx_2
                
                if (rcx_2 != 0)
                    sub_140a74f90(rcx_2)
                
                rbx_2 = &rbx_2[2]
                i = i_3
                i_3 -= 1
            while (i != 1)
        
        int32_t i_2 = arg2[0x1c].d
        void* rdi_1 = arg2[0x1b]
        int32_t r8_1 = *(arg1 + 0x10c)
        *(arg1 + 0x108) = i_2
        
        if (i_2 != 0 || r8_1 != 0)
            sub_1405a4be0(arg1 + 0x100, i_2, r8_1)
            int64_t* rbx_3 = *(arg1 + 0x100)
            
            if (i_2 != 0)
                int32_t i_1
                
                do
                    *rbx_3 = 0
                    int64_t rsi_2 = sx.q(*(rdi_1 + 8))
                    int64_t r15_2 = *rdi_1
                    rbx_3[1].d = rsi_2.d
                    
                    if (rsi_2.d != 0)
                        sub_1406387e0(rbx_3, rsi_2.d, 0)
                        memcpy(*rbx_3, r15_2, (rsi_2 << 3).d)
                    else
                        *(rbx_3 + 0xc) = 0
                    
                    rbx_3 = &rbx_3[2]
                    rdi_1 += 0x10
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
        else
            *(arg1 + 0x10c) = 0
    
    sub_14222aea0(arg2)
    j_sub_140a74f90(arg2)
    rbx = zx.q(rbx.b)

if (arg3[1].d != 0)
    int64_t* rcx_8 = *arg3
    
    if (rcx_8 != 0 && (*(*rcx_8 + 0x28))(rcx_8) != 0)
        if (arg3[1].d != 0)
            r14 = *arg3
        
        (*(*r14 + 0x50))(r14, zx.q(rbx.b))

return sub_140745b20(arg3) __tailcall
