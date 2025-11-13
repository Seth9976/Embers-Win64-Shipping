// 函数: sub_140aef750
// 地址: 0x140aef750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t rsi = 0
int32_t var_34 = 7
int16_t* const r14 = &data_142d40450
int32_t var_38 = 0
void* string

if (arg1[1].d == 0)
    string = &data_142d40450
else
    string = *arg1

int128_t var_a8[0x4]

while (true)
    wchar16* rax_2 = wcschr(string, 0x25)
    wchar16* rbx_1 = rax_2
    
    if (rax_2 == 0)
        break
    
    while (true)
        int64_t* rax_3 = sub_140af9950(rbx_1)
        
        if (rax_3 != 0)
            int64_t rdx_3 = sx.q(var_38)
            wchar16* var_c0_1 = rbx_1
            int32_t rax_5 = (rdx_3 + 1).d
            
            if (rax_5 s> var_34)
                sub_140aff030(&var_a8)
            
            var_a8[rdx_3] = string.o
            int32_t rax_8 = rax_3[2].d
            int16_t* const var_b8_1
            int32_t rax_9
            int16_t* const rcx_5
            
            if (rax_8 == 0)
                var_b8_1 = &data_142d40450
                rcx_5 = &data_142d40450
                rax_9 = 0
            else
                rcx_5 = rax_3[1]
                rax_9 = rax_8 - 1
                var_b8_1 = rcx_5
            
            int64_t rdx_4 = sx.q(rax_5)
            int32_t rax_11 = (rdx_4 + 1).d
            void* var_b0_1 = &rcx_5[sx.q(rax_9)]
            var_38 = rax_11
            
            if (rax_11 s> var_34)
                sub_140aff030(&var_a8)
            
            var_a8[rdx_4] = var_b8_1.o
            string = &rbx_1[sx.q(rax_3[3].d)]
            break
        
        wchar16* rax_4 = wcschr(&rbx_1[1], (rax_3 + 0x25).w)
        rbx_1 = rax_4
        
        if (rax_4 == 0)
            goto label_140aef7db

label_140aef7db:
int64_t rdx_1 = sx.q(var_38)
int64_t* result

if (rdx_1.d != 0)
    int32_t rcx_8 = arg1[1].d
    
    if (rcx_8 != 0)
        r14 = *arg1
    
    int32_t rax_15 = rcx_8 - 1
    
    if (rcx_8 == 0)
        rax_15 = 0
    
    int32_t rax_17 = (rdx_1 + 1).d
    void* var_c0_2 = &r14[sx.q(rax_15)]
    
    if (rax_17 s> var_34)
        sub_140aff030(&var_a8)
    
    int128_t (* rcx_11)[0x4] = &var_a8
    var_a8[rdx_1] = string.o
    uint64_t r8_2 = sx.q(rax_17)
    void* rdx_5 = &var_a8[r8_2]
    
    if (&var_a8 != rdx_5)
        do
            int64_t rax_23 = *(rcx_11 + 8) - *rcx_11
            rcx_11 = &(*rcx_11)[1]
            rsi += (rax_23 s>> 1).d
        while (rcx_11 != rdx_5)
    
    if (rsi + 1 s> *(arg2 + 0xc))
        sub_1405947f0(arg2, rsi + 1)
        r8_2 = zx.q(rax_17)
    
    int128_t (* rbx_2)[0x4] = &var_a8
    void* rdi = &var_a8[sx.q(r8_2.d)]
    
    if (&var_a8 != rdi)
        do
            int64_t rdx_7 = *rbx_2
            sub_140a20ba0(arg2, rdx_7, ((*(rbx_2 + 8) - rdx_7) s>> 1).d)
            rbx_2 = &(*rbx_2)[1]
        while (rbx_2 != rdi)
    
    result.b = 1
else
    sub_140597df0(arg2, arg1)
    result.b = 0

__security_check_cookie(rax_1 ^ &var_e8)
return result
