// 函数: sub_142612180
// 地址: 0x142612180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int64_t result

if (arg2 == 0)
    result = 0x80000008
else
    void* r11_1 = *arg1
    char rbx_1 = (*(r11_1 + 0xa0)).b
    char rsi_1 = (*(r11_1 + 0x9c)).b
    int32_t rdx_1 = (arg2 u>> rbx_1).d & ((1 << rsi_1).d - 1)
    uint64_t r8_2 = zx.q((1 << rbx_1).d - 1) & zx.q(arg2.d)
    
    if (rdx_1 u>= *(r11_1 + 0x30))
        result = 0x80000008
    else
        int32_t* rdi_2 = zx.q(rdx_1) * 0xb0 + *(r11_1 + 0x90)
        
        if (*rdi_2 != ((arg2 u>> (rsi_1 + rbx_1)).d & ((1 << (*(r11_1 + 0x98)).b).d - 1)))
            result = 0x80000008
        else
            void* rax_5 = *(rdi_2 + 8)
            
            if (rax_5 == 0 || r8_2.d u>= *(rax_5 + 0x18))
                result = 0x80000008
            else
                void* r8_4 = (r8_2 << 5) + *(rdi_2 + 0x10)
                
                if (rdi_2 == 0)
                    result = 0x80000008
                else if ((*(r8_4 + 0x1f) & 0xc0) != 0x40)
                    int64_t rbx_2 = 0
                    uint64_t rbp_1 = zx.q(*(r8_4 + 0x1e))
                    uint64_t r9_2 = zx.q(rbp_1.d)
                    void var_80
                    
                    if (rbp_1 u>= 4)
                        int64_t r10_3 = *(rdi_2 + 0x18)
                        void* rsi_2 = r8_4 + 6
                        int64_t i_3 = ((rbp_1 - 4) u>> 2) + 1
                        void* rdx_2 = &var_80
                        rbx_2 = i_3 << 2
                        int64_t i
                        
                        do
                            uint64_t rax_7 = zx.q(*(rsi_2 - 2))
                            rdx_2 += 0x30
                            rsi_2 += 8
                            uint64_t rcx_5 = rax_7 * 3
                            *(rdx_2 - 0x38) = *(r10_3 + (rcx_5 << 2))
                            *(rdx_2 - 0x34) = *(r10_3 + (rcx_5 << 2) + 4)
                            *(rdx_2 - 0x30) = *(r10_3 + (rcx_5 << 2) + 8)
                            uint64_t rcx_6 = zx.q(*(rsi_2 - 8)) * 3
                            *(rdx_2 - 0x2c) = *(r10_3 + (rcx_6 << 2))
                            *(rdx_2 - 0x28) = *(r10_3 + (rcx_6 << 2) + 4)
                            *(rdx_2 - 0x24) = *(r10_3 + (rcx_6 << 2) + 8)
                            uint64_t rcx_7 = zx.q(*(rsi_2 - 6)) * 3
                            *(rdx_2 - 0x20) = *(r10_3 + (rcx_7 << 2))
                            *(rdx_2 - 0x1c) = *(r10_3 + (rcx_7 << 2) + 4)
                            *(rdx_2 - 0x18) = *(r10_3 + (rcx_7 << 2) + 8)
                            uint64_t rcx_8 = zx.q(*(rsi_2 - 4)) * 3
                            *(rdx_2 - 0x14) = *(r10_3 + (rcx_8 << 2))
                            *(rdx_2 - 0x10) = *(r10_3 + (rcx_8 << 2) + 4)
                            *(rdx_2 - 0xc) = *(r10_3 + (rcx_8 << 2) + 8)
                            i = i_3
                            i_3 -= 1
                        while (i != 1)
                    
                    if (rbx_2 s< r9_2)
                        int64_t r10_4 = *(rdi_2 + 0x18)
                        int64_t i_2 = r9_2 - rbx_2
                        void* rdx_3 = &var_80 + rbx_2 * 0xc
                        void* r11_5 = r8_4 + 4 + (rbx_2 << 1)
                        int64_t i_1
                        
                        do
                            uint64_t rax_24 = zx.q(*r11_5)
                            rdx_3 += 0xc
                            r11_5 += 2
                            uint64_t rcx_9 = rax_24 * 3
                            *(rdx_3 - 0x14) = *(r10_4 + (rcx_9 << 2))
                            *(rdx_3 - 0x10) = *(r10_4 + (rcx_9 << 2) + 4)
                            *(rdx_3 - 0xc) = *(r10_4 + (rcx_9 << 2) + 8)
                            i_1 = i_2
                            i_2 -= 1
                        while (i_1 != 1)
                    
                    void var_88
                    *arg4 = sub_142609450(arg3, &var_88, rbp_1.d)
                    result = 0x40000000
                else
                    result = 0

__security_check_cookie(rax_1 ^ &var_a8)
return result
