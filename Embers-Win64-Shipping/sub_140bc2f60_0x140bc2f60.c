// 函数: sub_140bc2f60
// 地址: 0x140bc2f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_878
int64_t rax_1 = __security_cookie ^ &var_878
void* rsi = nullptr

if (arg2[1].d != *(arg2 + 0x34))
    int32_t rax_3 = *(arg2 + 0xc)
    arg2[1].d = 0
    
    if (rax_3 s< 0 && rax_3 != 0)
        sub_140638cc0(arg2, 0)
    
    arg2[6].d = 0xffffffff
    *(arg2 + 0x34) = 0
    sub_140774790(&arg2[2])
    int64_t rcx_2 = sx.q(arg2[9].d)
    void* rdi_1 = &arg2[7]
    void* rax_4 = *(rdi_1 + 8)
    
    if (rcx_2 s> 0)
        if (rax_4 != 0)
            rdi_1 = rax_4
        
        __builtin_memset(rdi_1, 0xffffffff, rcx_2 << 2)

int32_t var_858[0x4]
var_858[0] = 0xffffffff
char rax_5 = sub_140bc30e0(arg1, arg1, arg2, &var_858)

if (rax_5 == 0)
    void* rbx_1 = *(arg1 + 0xc8)
    EnterCriticalSection(rbx_1 + 0xe0)
    
    if (*(rbx_1 + 0x110) != *(rbx_1 + 0x13c))
        void* r9_1 = rbx_1 + 0x140
        void* rdx_1 = *(r9_1 + 8)
        int64_t rcx_6 = sx.q(var_858[0])
        
        if (rdx_1 != 0)
            r9_1 = rdx_1
        
        int32_t i = *(r9_1 + (((sx.q(*(rbx_1 + 0x150)) - 1) & rcx_6) << 2))
        
        if (i != 0xffffffff)
            int64_t r9_2 = *(rbx_1 + 0x108)
            
            do
                int64_t i_1 = sx.q(i)
                int64_t rdx_2 = i_1 * 3
                
                if (*(r9_2 + (rdx_2 << 3)) == rcx_6.d)
                    if (i != 0xffffffff)
                        void* rcx_7 = r9_2 + i_1 * 0x18
                        
                        if (rcx_7 != 0)
                            rsi = *(rcx_7 + 8)
                    
                    break
                
                i = *(r9_2 + (rdx_2 << 3) + 0x10)
            while (i != 0xffffffff)
    
    if (rbx_1 != -0xe0)
        LeaveCriticalSection(rbx_1 + 0xe0)
    
    void var_848
    sub_140b63d10(rsi + 0x1c, &var_848)

__security_check_cookie(rax_1 ^ &var_878)
return zx.q(rax_5)
