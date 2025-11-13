// 函数: sub_142bb7fc0
// 地址: 0x142bb7fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int32_t* r15 = *(arg1 + 0x2e0)
int64_t rsi = 0
int64_t r11 = *(arg1 + 0x98)
int32_t** r12 = arg2
int32_t** var_58 = arg2
int32_t result = 6
int32_t var_a4
uint64_t i_3
int32_t i_6

if (r15 == 0)
    i_3 = zx.q(i_6)
else
    i_3 = zx.q(r15[1])
    int32_t i_7 = i_3.d
    var_a4 = *r15
    
    if (i_3.d != 0)
        void var_94
        void* rdx = &var_94
        uint64_t i_4 = zx.q(i_3.d)
        void* r9_1 = &r15[2]
        void* r8_1 = &r15[0x2c]
        uint64_t i
        
        do
            int64_t rax_3 = *r9_1
            r9_1 += 8
            int32_t* rcx = *r8_1
            r8_1 += 0x18
            *(rdx - 0xc) = rax_3
            rdx += 0x10
            *(rdx - 0x14) = *rcx
            *(rdx - 0x10) = rcx[sx.q(zx.d(*(r8_1 - 0x20)) - 1)]
            i = i_4
            i_4 -= 1
        while (i != 1)
        i_3 = zx.q(i_7)
    
    result = 0
int32_t result_1 = result

if (result == 0)
    int32_t* rax_8 = sub_142b99860(r11, (i_3 + 1).d << 5, &result_1)
    result = result_1
    
    if (result == 0)
        rax_8[1] = var_a4
        *(rax_8 + 0x10) = &rax_8[8]
        *rax_8 = i_3.d
        rax_8[2] = 0
        *(rax_8 + 0x18) = 0
        
        if (i_3.d != 0)
            void var_98
            void* r12_1 = &var_98
            uint64_t i_5 = zx.q(i_3.d)
            int64_t* rdi_1 = nullptr
            uint64_t i_1
            
            do
                *(rdi_1 + *(rax_8 + 0x10)) = *(r12_1 - 8)
                *(rdi_1 + *(rax_8 + 0x10) + 8) = *r12_1 << 0x10
                *(rdi_1 + *(rax_8 + 0x10) + 0x10) = *(r12_1 + 4) << 0x10
                int64_t rcx_8 = *(rax_8 + 0x10)
                int32_t temp1_1
                int32_t temp2_1
                temp1_1:temp2_1 = sx.q(*(rcx_8 + rdi_1 + 0x10) + *(rcx_8 + rdi_1 + 8))
                *(rcx_8 + rdi_1 + 0xc) = (temp2_1 - temp1_1) s>> 1
                *(rdi_1 + *(rax_8 + 0x10) + 0x18) = 0xffffffff
                *(rdi_1 + *(rax_8 + 0x10) + 0x14) = 0xffffffff
                void* rbx_2 = *(rax_8 + 0x10) + rdi_1
                char* _Str1 = *rbx_2
                
                if (_Str1 != 0)
                    int64_t rcx_9 = 0
                    
                    while (true)
                        char rax_21 = _Str1[rcx_9]
                        rcx_9 += 1
                        
                        if (rax_21 != *(rcx_9 + 0x14368438f))
                            int64_t rax_22 = 0
                            
                            while (true)
                                char rcx_10 = _Str1[rax_22]
                                rax_22 += 1
                                
                                if (rcx_10 != *(rax_22 + 0x143684397))
                                    if (strcmp(_Str1, "OpticalSize") == 0)
                                        __builtin_strncpy(rbx_2 + 0x14, "zspo", 4)
                                    
                                    break
                                
                                if (rax_22 == 6)
                                    __builtin_strncpy(rbx_2 + 0x14, "htdw", 4)
                                    break
                            
                            break
                        
                        if (rcx_9 == 7)
                            __builtin_strncpy(rbx_2 + 0x14, "thgw", 4)
                            break
                
                r12_1 += 0x10
                rdi_1 = &rdi_1[4]
                i_1 = i_5
                i_5 -= 1
            while (i_1 != 1)
            r12 = var_58
        
        sub_142bbb300(*(r15 + 0x110), &var_58, r15[1])
        
        if (i_3.d != 0)
            int64_t rbx_3 = 0
            int32_t*** rdi_2 = &var_58
            uint64_t i_2
            
            do
                int32_t rax_24 = sub_142bbb230(&r15[0x2a] + rbx_3, *rdi_2)
                rsi += 0x20
                rdi_2 += 4
                rbx_3 += 0x18
                *(*(rax_8 + 0x10) + rsi - 0x14) = rax_24
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
        
        result = result_1
        *r12 = rax_8

__security_check_cookie(rax_1 ^ &var_d8)
return result
