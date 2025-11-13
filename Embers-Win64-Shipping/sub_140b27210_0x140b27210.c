// 函数: sub_140b27210
// 地址: 0x140b27210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
uint64_t rax_3 = (*(*arg4 + 0x20))(arg4, arg2, zx.q(arg5))
int64_t* rbx = rax_3
int16_t* rdi

if (rax_3 != 0)
    int32_t r8_1 = *(arg1 + 8)
    
    if (r8_1 s> 1)
        if (arg3 == 2)
        label_140b27297:
            rax_3.b = 1
        else
            if (arg3 == 0)
                int16_t* rcx_1 = *arg1
                rax_3 = zx.q(*rcx_1)
                
                while (rax_3.w != 0)
                    if (rax_3.w u> 0x7f)
                        goto label_140b27297
                    
                    rax_3 = zx.q(rcx_1[1])
                    rcx_1 = &rcx_1[1]
            
            rax_3.b = 0
        
        int16_t var_d8
        void var_c8
        uint64_t var_48
        void* var_40
        int32_t var_38
        void* rdx_2
        int64_t r8_4
        
        if (arg3 != 3)
            if (arg3 == 4)
                int32_t rax_6 = r8_1 - 1
                
                if (r8_1 == 0)
                    rax_6 = 0
                
                if (r8_1 == 0)
                    rdi = &data_142d40450
                else
                    rdi = *arg1
                
                sub_140b09ee0(&var_c8, rdi, rax_6)
                r8_4 = sx.q(var_38)
                rdx_2 = var_40
                goto label_140b27471
            
            if (rax_3.b == 0)
                uint64_t rdx_6 = 0
                int32_t rcx_9 = r8_1 - 1
                
                if (r8_1 == 0)
                    rcx_9 = 0
                
                if (r8_1 == 0)
                    rdi = &data_142d40450
                else
                    rdi = *arg1
                
                var_48 = 0
                void* rcx_11
                
                if (rdi == 0)
                    rcx_11 = nullptr
                    int64_t var_40_2 = 0
                    int32_t var_38_2 = 0
                else
                    int32_t r8_9 = 0
                    
                    if (rcx_9 s> 0 && rdi[sx.q(rcx_9) - 1] == 0)
                        r8_9 = 1
                        rcx_9 -= 1
                    
                    int32_t rsi_1 = r8_9 + rcx_9
                    
                    if (rsi_1 u> 0x80 && rsi_1 != 0)
                        uint64_t rax_12 = sub_140a84c80(0, sx.q(rsi_1), 0)
                        rdx_6 = rax_12
                        var_48 = rax_12
                    
                    void* rcx_10 = &var_c8
                    
                    if (rdx_6 != 0)
                        rcx_10 = rdx_6
                    
                    sub_14060abb0(rcx_10, rsi_1, rdi, rsi_1, 0x3f)
                    rdx_6 = zx.q(rcx_9)
                    rcx_11 = rcx_10
                
                r8_4 = sx.q(rdx_6.d)
                rdx_2 = rcx_11
                goto label_140b27471
            
            var_d8 = 0xfeff
            (*(*rbx + 0x150))(rbx, &var_d8, 2)
            int32_t rax_8 = *(arg1 + 8)
            int32_t r8_6 = rax_8 - 1
            
            if (rax_8 == 0)
                r8_6 = 0
            
            if (rax_8 == 0)
                rdi = &data_142d40450
            else
                rdi = *arg1
            
            uint64_t rcx_7
            
            if (rdi == 0)
                rdi = nullptr
                rcx_7 = 0
            else
                if (r8_6 s> 0 && rdi[sx.q(r8_6) - 1] == 0)
                    r8_6 -= 1
                
                if (r8_6 != 0xffffffff)
                    rcx_7 = zx.q(r8_6)
                else
                    rcx_7 = -1
                    
                    do
                        rcx_7 += 1
                    while (rdi[rcx_7] != 0)
            
            (*(*rbx + 0x150))(rbx, rdi, sx.q(rcx_7.d) * 2)
        else
            int64_t rax_4 = *rbx
            var_d8 = 0xbbef
            char var_d6_1 = 0xbf
            (*(rax_4 + 0x150))(rbx, &var_d8, zx.q(arg3))
            int32_t rax_5 = *(arg1 + 8)
            int32_t r8_3 = rax_5 - 1
            
            if (rax_5 == 0)
                r8_3 = 0
            
            if (rax_5 == 0)
                rdi = &data_142d40450
            else
                rdi = *arg1
            
            sub_140b09ee0(&var_c8, rdi, r8_3)
            r8_4 = sx.q(var_38)
            rdx_2 = var_40
        label_140b27471:
            (*(*rbx + 0x150))(rbx, rdx_2, r8_4)
            
            if (var_48 != 0)
                sub_140a74f90(var_48)
        (*(*rbx + 0x1b8))(rbx)
        rdi.b = (*(rbx + 0x29) & 3) == 0
    else
        rdi.b = 1
else
    rdi.b = 0

if (rbx != 0)
    int64_t r8_11 = *rbx
    (*r8_11)(rbx, 1, r8_11)

__security_check_cookie(rax_1 ^ &var_108)
return zx.q(rdi.b)
