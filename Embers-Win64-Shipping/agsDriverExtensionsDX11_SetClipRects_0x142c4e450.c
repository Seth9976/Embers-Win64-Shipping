// 函数: agsDriverExtensionsDX11_SetClipRects
// 地址: 0x142c4e450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = __security_cookie ^ &var_28
uint64_t i_2 = zx.q(arg2)
uint64_t result

if (arg1 == 0 || (arg2 != 0 && arg3 == 0))
    result = 2
else if ((*(arg1 + 0x130) & 0x40000) != 0)
    uint64_t _Size = 0
    uint64_t rcx_1 = i_2 * 0x14
    uint64_t i_1 = i_2
    
    if (rcx_1 + 0x10 u> rcx_1)
        _Size = rcx_1 + 0x10
    
    if (_Size == 0)
        result = 3
    else
        void* rbx_1
        
        if (_Size u> 0x400)
            void* rax_5 = malloc(_Size)
            rbx_1 = rax_5
            
            if (rax_5 != 0)
                *rax_5 = 0xdddd
            label_142c4e524:
                rbx_1 += 0x10
            
            if (rbx_1 == 0)
                result = 3
            else
                if (i_2.d != 0)
                    void* rcx_3 = rbx_1 + 8
                    void* rdi_1 = arg3 - rbx_1
                    uint64_t i
                    
                    do
                        bool cond:1_1 = *(rdi_1 + rcx_3 - 8) == 1
                        rcx_3 += 0x14
                        int32_t rax_6
                        rax_6.b = cond:1_1
                        *(rcx_3 - 0x1c) = rax_6
                        *(rcx_3 - 0x18) = *(rdi_1 + rcx_3 - 0x18)
                        *(rcx_3 - 0x14) = *(rdi_1 + rcx_3 - 0x14)
                        *(rcx_3 - 0x10) = *(rdi_1 + rcx_3 - 0x10) + *(rdi_1 + rcx_3 - 0x18)
                        *(rcx_3 - 0xc) = *(rdi_1 + rcx_3 - 0xc) + *(rdi_1 + rcx_3 - 0x14)
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                
                int64_t* rcx_4 = *(arg1 + 0x178)
                int32_t rax_14 = (*(*rcx_4 + 0x30))(rcx_4, zx.q(i_2.d), rbx_1)
                int32_t rdi_2 = rax_14
                
                if (*(rbx_1 - 0x10) == 0xdddd)
                    rax_14 = free(rbx_1 - 0x10)
                
                result = zx.q(sbb.d(rax_14, rax_14, rdi_2 != 0)) & 8
        else
            int64_t rax_3 = _Size + 0xf
            
            if (rax_3 u<= _Size)
                rax_3 = 0xffffffffffffff0
            
            int64_t rax_4 = rax_3 & 0xfffffffffffffff0
            __chkstk(rax_4)
            void var_48
            rbx_1 = &var_48 - rax_4 + 0x20
            
            if (rbx_1 != 0)
                *rbx_1 = 0xcccc
                goto label_142c4e524
            
            result = 3
else
    result = 6

__security_check_cookie(var_28 ^ &var_28)
return result
