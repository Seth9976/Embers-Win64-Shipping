// 函数: sub_14211ccb0
// 地址: 0x14211ccb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx
int64_t arg_10 = rdx
int64_t r8
int64_t arg_18 = r8
int64_t r9
int64_t arg_20 = r9
int64_t* rcx = *arg1
int32_t r12 = (*U"1111")[sx.q(*(rcx + 0x1c))]
int16_t* var_d8
(*(*rcx + 0x360))(arg2, &var_d8)
int64_t r14 = 0
void* rdx_2 = *arg1[1]
int64_t* rsi = *(rdx_2 + 0x20)
uint64_t r15_1 = sx.q(*(rdx_2 + 0x28)) << 3 u>> 3

if (rsi u> &rsi[sx.q(*(rdx_2 + 0x28))])
    r15_1 = 0

if (r15_1 != 0)
    do
        void* rbx_1 = *rsi
        int64_t* rcx_1 = *arg1[2]
        
        if (rcx_1 == 0)
            rcx_1 = *(*(*arg1 + 0x10) + 0x28)
        
        if (sub_1419cec70(rcx_1, rbx_1 + 0x28, 0) != 0)
            int32_t rax_8 = *(rbx_1 + 8)
            void* r8_1 = nullptr
            
            if (rax_8 == 2)
                r8_1 = rbx_1
            
            int64_t var_e8
            int128_t var_c8
            
            if (r8_1 == 0)
                void* const r8_4 = nullptr
                
                if (rax_8 == 1)
                    r8_4 = rbx_1
                
                if (r8_4 != 0)
                    int64_t* rcx_9 = *arg1
                    (*(*rcx_9 + 8))(rcx_9, zx.q(r12), r8_4, *arg1[3], var_e8)
                    sub_142119000(&var_c8, *arg1)
                    void* const rcx_11 = nullptr
                    
                    if (*(rbx_1 + 8) == 1)
                        rcx_11 = rbx_1
                    
                    int128_t var_78_1 = var_c8
                    int32_t var_80 = r12
                    int32_t var_7c_1 = 0
                    int128_t var_b8
                    int128_t var_68_1 = var_b8
                    int128_t var_a8
                    int128_t var_58_1 = var_a8
                    sub_1419d8600(rcx_11, &var_80)
            else
                int64_t* rcx_3 = *arg1
                (*(*rcx_3 + 8))(rcx_3, zx.q(r12), r8_1, *arg1[3], var_e8)
                sub_142119000(&var_c8, *arg1)
                sub_142155d00(*arg1[3], r12, &var_c8)
                sub_142119000(&var_c8, *arg1)
                void* rcx_8 = nullptr
                var_e8.d = 0
                
                if (*(rbx_1 + 8) == 2)
                    rcx_8 = rbx_1
                
                sub_142155c10(rcx_8, r12, &var_c8, (*arg1[3]).d)
        
        rsi = &rsi[1]
        r14 += 1
    while (r14 != r15_1)

int16_t* const rbx_2 = &data_142d40450
int16_t* const rsi_1 = &data_142d40450
int32_t var_d0

if (var_d0 != 0)
    rsi_1 = var_d8

void var_98
int64_t var_90
int64_t* rax_12 = sub_140b63b70(sub_141976940(&var_98, r12), &var_90)

if (rax_12[1].d != 0)
    rbx_2 = *rax_12

int16_t* const var_e0 = rsi_1
int16_t* const var_e8_1 = rbx_2
sub_140af98a0("Unknown", 0x83c, \t\tWith VF=%s, Platform=%s\n\t\tMaterialUsageDesc: %s", 
    *(*arg1[3] + 8))
int64_t rcx_14 = var_90

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

int64_t result = sub_140afbb40()
int16_t* rcx_15 = var_d8

if (rcx_15 == 0)
    return result

return sub_140a74f90(rcx_15)
