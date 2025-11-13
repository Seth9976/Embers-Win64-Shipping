// 函数: sub_140b291e0
// 地址: 0x140b291e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
wchar16* rdx_4

if (arg3 - 1 u> 5)
    rdx_4 = u"%08X%08X%08X%08X"
label_140b2947d:
    arg1[1]
    int32_t var_90_5 = arg1[3]
    int32_t var_98_5 = arg1[2]
    sub_140a2e390(arg2, rdx_4, zx.q(*arg1))
else
    switch (arg3)
        case 1
            int32_t r11_1 = arg1[2]
            int32_t var_80_1 = arg1[3]
            uint32_t var_88_1 = zx.d(r11_1.w)
            uint32_t var_90_1 = r11_1 u>> 0x10
            uint32_t var_98_1 = zx.d(arg1[1].w)
            sub_140a2e390(arg2, u"%08X-%04X-%04X-%04X-%04X%08X", zx.q(*arg1))
        case 2
            int32_t r8_2 = arg1[2]
            int32_t var_80_2 = arg1[3]
            uint32_t var_88_2 = zx.d(r8_2.w)
            uint32_t var_90_2 = r8_2 u>> 0x10
            uint32_t var_98_2 = zx.d(arg1[1].w)
            sub_140a2e390(arg2, u"{%08X-%04X-%04X-%04X-%04X%08X}", zx.q(*arg1))
        case 3
            int32_t r8_5 = arg1[2]
            int32_t var_80_3 = arg1[3]
            uint32_t var_88_3 = zx.d(r8_5.w)
            uint32_t var_90_3 = r8_5 u>> 0x10
            uint32_t var_98_3 = zx.d(arg1[1].w)
            sub_140a2e390(arg2, u"(%08X-%04X-%04X-%04X-%04X%08X)", zx.q(*arg1))
        case 4
            int32_t rsi_1 = arg1[2]
            int32_t rdi_1 = arg1[3]
            uint32_t var_58_1 = zx.d(rdi_1.b)
            uint32_t var_60_1 = zx.d((rdi_1 u>> 8).b)
            uint32_t var_68_1 = zx.d((rdi_1 u>> 0x10).b)
            uint32_t var_70_1 = rdi_1 u>> 0x18
            uint32_t var_78_1 = zx.d(rsi_1.b)
            uint32_t var_80_4 = zx.d((rsi_1 u>> 8).b)
            uint32_t var_88_4 = zx.d((rsi_1 u>> 0x10).b)
            uint32_t var_90_4 = rsi_1 u>> 0x18
            uint32_t var_98_4 = zx.d(arg1[1].w)
            sub_140a2e390(arg2, 
                {0x%08X,0x%04X,0x%04X,{0x%02X,0x%02X,0x%02X,0x%02X,0x%02X,0x%02X,0x%02X,0x%02X}}", 
                zx.q(*arg1))
        case 5
            rdx_4 = u"%08X-%08X-%08X-%08X"
            goto label_140b2947d
        case 6
            int32_t var_38 = *arg1
            int32_t var_34_1 = arg1[1]
            int32_t var_30_1 = arg1[2]
            int32_t var_2c_1 = arg1[3]
            int64_t var_48
            sub_140aef380(&var_48, &var_38, 0x10)
            sub_140a30380(&var_48, 0x2b, 0x2d)
            sub_140a30380(&var_48, 0x2f, 0x5f)
            int32_t var_40
            int32_t rcx_13 = var_40
            int32_t rbx_2
            
            if (rcx_13 == 0)
                rbx_2 = 0
            else
                rbx_2 = rcx_13 - 1
            
            int32_t rbx_3 = rbx_2 - 0x16
            
            if (rbx_3 s> 2)
                rbx_3 = 2
            
            if (rbx_3 != 0)
                int32_t rax_19 = rcx_13 - rbx_3
                
                if (rax_19 != 0x16)
                    int64_t rax_22 = var_48
                    memmove(rax_22 + 0x2c, rax_22 + (sx.q(rbx_3 + 0x16) << 1), (rax_19 - 0x16) * 2)
                    rcx_13 = var_40
                
                rcx_13 -= rbx_3
            
            *arg2 = var_48
            int32_t var_3c
            *(arg2 + 0xc) = var_3c
            arg2[1].d = rcx_13
__security_check_cookie(rax_1 ^ &var_b8)
return arg2
