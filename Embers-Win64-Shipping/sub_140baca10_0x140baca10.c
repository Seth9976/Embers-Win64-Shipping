// 函数: sub_140baca10
// 地址: 0x140baca10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)
char arg_10 = 0
char* var_40 = &arg_10
void* rdi_2 = (rbx << 7) + *(arg1 + 0x18)
void*** (* var_48)() = j_sub_140b99600
char rax_1 = sub_140baccc0(sub_140a756e0(&var_48, &data_1439a98a0), arg1, rbx.d)
int32_t i = *(rdi_2 + 8)
char rsi = rax_1

if (rax_1 != 0)
    return zx.q(rsi)

while (i != 0)
    if (i == 0)
        break
    
    arg_10 = 0
    char* var_40_1 = &arg_10
    void* r14_3 = ((sx.q(i) - 1) << 7) + *(arg1 + 0x18)
    var_48 = j_sub_140b99600
    void* rax_2 = sub_140a756e0(&var_48, &data_1439a98a0)
    int32_t arg_8
    sub_140ba6ab0(rax_2 + 0x10, &arg_8, arg1)
    int64_t rcx_4 = sx.q(arg_8)
    void* const rcx_7
    
    if (rcx_4.d == 0xffffffff)
        rcx_7 = nullptr
    else
        rcx_7 = rcx_4 * 0x60 + *(rax_2 + 0x10)
    
    int64_t* r8_2 = rcx_7 + 8
    
    if (rcx_7 == 0)
        r8_2 = nullptr
    
    int32_t rax_3
    
    if (r8_2 == 0)
        rax_3.b = 0
    else
        if (r8_2[1].d != *(r8_2 + 0x34))
            void* rax_5 = r8_2[8]
            void* rdx_2 = &r8_2[7]
            
            if (rax_5 != 0)
                rdx_2 = rax_5
            
            rax_3 = *(rdx_2 + (((sx.q(r8_2[9].d) - 1) & (sx.q(i) - 1)) << 2))
        
        if (r8_2[1].d == *(r8_2 + 0x34) || rax_3 == 0xffffffff)
        label_140bacb67:
            rax_3 = -1
        else
            int64_t r9_1 = *r8_2
            
            while (true)
                int64_t rdx_3 = sx.q(rax_3) * 3
                
                if (*(r9_1 + (rdx_3 << 2)) == i - 1)
                    break
                
                rax_3 = *(r9_1 + (rdx_3 << 2) + 4)
                
                if (rax_3 == 0xffffffff)
                    goto label_140bacb67
        
        rax_3.b = rax_3 != 0xffffffff
    
    rsi |= rax_3.b
    i = *(r14_3 + 8)
    
    if (rsi != 0)
        break

return zx.q(rsi)
