// 函数: sub_1410088f0
// 地址: 0x1410088f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = arg1

if ((*(arg3 + 0x1c) & 6) == 0 && (*(arg3 + 0x160) & 2) == 0)
    void* i = arg3
    
    do
        if (sub_1410363e0(arg2) == 0)
            arg4 = sub_14105bf30(rbx, *(i + 0x78), *(i + 0xb8) + *(arg3 + 0x158), *(arg3 + 0x100), 
                *(arg3 + 0x140), *(arg3 + 0x15c))
        else if (data_1439c7a34 != 1)
            int64_t var_98
            sub_14103f450(&var_98, *(arg3 + 0xf0))
            int512_t zmm0 = sub_141059540(var_98, &var_98, arg3 + 0xf0, arg4)
            void*** r14_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_6 = &r14_3[0x11]
            
            if (rax_6 u> *(arg2 + 0x38))
                zmm0 = sub_140b0e3d0(arg2 + 0x30, 0x90)
                r14_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_6 = &r14_3[0x11]
            
            *(arg2 + 0x30) = rax_6
            void**** rax_7 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_7 = r14_3
            *(arg2 + 8) = &r14_3[1]
            int32_t rdi_1 = *(arg3 + 0x15c)
            int32_t rsi_2 = *(arg3 + 0x158)
            r14_3[1] = 0
            *r14_3 = &data_142efec68
            sub_14103f450(&r14_3[2], 0)
            r14_3[0x10].d = rdi_1
            r14_3[0xf] = i + 0x68
            *(r14_3 + 0x84) = rsi_2
            arg4 = j_sub_141059a80(&var_98, sub_14105b290(&r14_3[2], &var_98, zmm0))
            rbx = arg1
        else
            void*** rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_2 = &rbx_3[0x11]
            
            if (rax_2 u> *(arg2 + 0x38))
                arg4 = sub_140b0e3d0(arg2 + 0x30, 0x90)
                rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_2 = &rbx_3[0x11]
            
            *(arg2 + 0x30) = rax_2
            void** rax_3 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_3 = rbx_3
            *(arg2 + 8) = &rbx_3[1]
            int32_t rsi_1 = *(arg3 + 0x15c)
            int32_t rbp_1 = *(arg3 + 0x158)
            rbx_3[1] = 0
            *rbx_3 = &data_142efec68
            sub_14103f450(&rbx_3[2], 0)
            rbx_3[0x10].d = rsi_1
            rbx_3[0xf] = i + 0x68
            *(rbx_3 + 0x84) = rbp_1
            arg4 = sub_14105b290(&rbx_3[2], arg3 + 0xf0, arg4)
            rbx = arg1
        
        i = *(i + 0xd8)
    while (i != 0)

sub_141044ca0(arg3 + 0xf0, arg4)
*(arg3 + 0x160) &= 0xfffffffc
*(arg3 + 0x158) = 0
return 0
