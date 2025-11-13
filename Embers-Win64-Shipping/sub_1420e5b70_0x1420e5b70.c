// 函数: sub_1420e5b70
// 地址: 0x1420e5b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140597df0(arg1 + 0x30, arg2)
sub_140597df0(arg1 + 0x40, &arg2[2])
*(arg1 + 0x50) = arg2[4].d
*(arg1 + 0x54) = *(arg2 + 0x24)
sub_140597df0(arg1 + 0x58, &arg2[5])
sub_140597df0(arg1 + 0x68, &arg2[7])

if (arg1 + 0x78 != &arg2[9])
    int64_t* rbx_1 = *(arg1 + 0x78)
    int32_t i_3 = *(arg1 + 0x80)
    
    if (i_3 != 0)
        int32_t i
        
        do
            int64_t rcx_4 = *rbx_1
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            rbx_1 = &rbx_1[2]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    int32_t i_2 = arg2[0xa].d
    void* rdi_1 = arg2[9]
    int32_t r8_1 = *(arg1 + 0x84)
    *(arg1 + 0x80) = i_2
    
    if (i_2 != 0 || r8_1 != 0)
        sub_1405a4be0(arg1 + 0x78, i_2, r8_1)
        int64_t* rbx_2 = *(arg1 + 0x78)
        
        if (i_2 != 0)
            int32_t i_1
            
            do
                *rbx_2 = 0
                int32_t rsi_1 = *(rdi_1 + 8)
                int64_t r15_1 = *rdi_1
                rbx_2[1].d = rsi_1
                
                if (rsi_1 != 0)
                    sub_1405a4c70(rbx_2, rsi_1, 0)
                    memcpy(*rbx_2, r15_1, rsi_1 * 2)
                else
                    *(rbx_2 + 0xc) = 0
                
                rbx_2 = &rbx_2[2]
                rdi_1 += 0x10
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0x84) = 0

return sub_140597df0(arg1 + 0x88, &arg2[0xb]) __tailcall
