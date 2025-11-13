// 函数: sub_14193f230
// 地址: 0x14193f230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi
void* arg_18 = rsi
void var_538
int64_t rax_1 = __security_cookie ^ &var_538

if (*(arg2 + 0x14) == 0)
    *(arg2 + 0x14) = 1

void var_4e8
sub_14192a540(&var_4e8)
int32_t var_a0 = *(arg2 + 0x10)
void var_150
sub_14192bc70(&var_150, arg2 + 0x18)
int32_t var_24 = *(arg1 + 0x28)
int128_t var_34 = *(arg1 + 0x18)
sub_14193d1f0()
int64_t* rbx_1 = nullptr
int32_t var_508
void var_98
void* rax_4

if (data_1439c77d0 == 0)
    sub_14193a5e0(&data_1439c7780, &var_508, &var_98)
    int64_t rax_5 = sx.q(var_508)
    void* const rax_7
    
    if (rax_5.d == 0xffffffff)
        rax_7 = nullptr
    else
        rax_7 = rax_5 * 0x88 + data_1439c7780
    
    void** rcx_2 = rax_7 + 0x78
    
    if (rax_7 == 0)
        rcx_2 = nullptr
    
    if (rcx_2 == 0)
        rax_4 = nullptr
    else
        rax_4 = *rcx_2
else
    rax_4 = sub_14193a110(&data_1439c76c0, &var_98, 1)

*(arg2 + 0xe8) = rax_4

if (rax_4 != 0)
    rsi.b = 1
else
    void* rax_8 = sub_14193f470(&var_4e8)
    *(arg2 + 0xe8) = rax_8
    
    if (rax_8 != 0)
        var_508.q = rax_8
        sub_14193d1f0()
        int128_t* rdx_7 = &var_98
        
        if (data_1439c77d0 == 0)
            sub_141926320(&data_1439c7780, rdx_7, &var_508)
        else
            sub_1419301f0(&data_1439c76c0, rdx_7, rax_8)
        
        rsi.b = 1
    else
        sub_140b58170(&var_508, "FailedComputeProgramLink", (rax_8 + 1).d)
        
        if (data_143f025a0 != 0)
            int64_t* rcx_5 = data_143f02598
            
            if (rcx_5 != 0)
                int64_t rdx_4 = *rcx_5
                
                if ((*(rdx_4 + 0x28))(rcx_5, rdx_4) != 0)
                    if (data_143f025a0 != 0)
                        rbx_1 = data_143f02598
                    
                    (*(*rbx_1 + 0x50))(rbx_1, &var_508)
        
        int64_t* var_500
        int64_t** rax_11 = sub_14194e5d0(&var_98, &var_500)
        int64_t* r9_1
        
        if (rax_11[1].d == 0)
            r9_1 = &data_142d40450
        else
            r9_1 = *rax_11
        
        int32_t var_518_1 = data_143eff66c
        sub_140af98a0("Unknown", 0xba8, 
            Failed to link compute program [%s]. Current total programs: %d", r9_1)
        int64_t* rcx_8 = var_500
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        sub_140afbb40()
        rsi.b = 0

int64_t i_1 = 6
void* rdi_1 = &var_98
int64_t i

do
    rdi_1 -= 0xb8
    sub_14192b980(rdi_1)
    i = i_1
    i_1 -= 1
while (i != 1)
__security_check_cookie(rax_1 ^ &var_538)
return zx.q(rsi.b)
