// 函数: sub_142438b90
// 地址: 0x142438b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
void* const r14 = nullptr
*(arg1 + 0x64) = *(arg1 + 0x140)
int32_t r15 = 1
int32_t var_68 = 1
int128_t var_78 = zx.o(0)
char var_50 = 0
int64_t var_48 = 0
int128_t var_64 = data_143dbb1e0
int32_t var_54 = (1 << (data_1439c7a34).b) - 1
int32_t var_40 = 0
int64_t* var_f0

if (data_143f0f142 != 0)
    int64_t r8_1 = sx.q(*(arg1 + 0x140))
    int64_t r13_1 = 0
    int64_t r14_1 = sx.q(*(arg1 + 0x68))
    
    if (r8_1 s< r14_1)
        void* rcx_2 = arg1 + 0x108 + (r8_1 << 2)
        int64_t i_2 = r14_1 - r8_1
        int64_t i
        
        do
            uint64_t rax_5 = zx.q(*rcx_2)
            rcx_2 += 4
            r13_1 += rax_5
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    if (r13_1 u> zx.q(*(arg1 + 0x90 + (r8_1 << 2) + 0x78)))
        int64_t* rax_7 = sub_140a82f30(r13_1, 0, r8_1)
        int64_t rcx_4 = sx.q(*(arg1 + 0x140))
        int64_t* r12_1 = rax_7
        var_f0 = rax_7
        
        if (rcx_4 s< r14_1)
            int64_t i_3 = r14_1 - rcx_4
            void* rbx_2 = arg1 + 0x108 + (rcx_4 << 2)
            void* r15_2 = arg1 + 0x98 + (rcx_4 << 3)
            int64_t i_1
            
            do
                int64_t rdx_2 = *r15_2
                
                if (rdx_2 != 0)
                    memcpy(r12_1, rdx_2, *rbx_2)
                
                r15_2 += 8
                r12_1 += zx.q(*rbx_2)
                rbx_2 += 4
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
            r15 = (i_3 + 1).d
        
        (*(*(arg1 + 0x90) + 0x18))(arg1 + 0x90)
        *(arg1 + 0x90 + (sx.q(*(arg1 + 0x140)) << 3) + 8) = var_f0
        *(arg1 + 0x90 + (sx.q(*(arg1 + 0x140)) << 2) + 0x78) = r13_1.d
    
    var_78.q = arg1 + 0x90
    r14 = nullptr

int32_t r8_3 = *(arg1 + 0x64)
int32_t r11 = r15
char rcx_8 = r8_3.b
int32_t rbx_3 = r15
*(arg1 + 0x58)
uint32_t rax_15 = *(arg1 + 0x5c) u>> rcx_8

if (rax_15 u>= 1)
    r11 = rax_15

uint32_t rax_17 = *(arg1 + 0x60) u>> rcx_8

if (rax_17 u>= 1)
    rbx_3 = rax_17

void* rcx_9 = *(*(arg1 + 0x48) + 0xb8)
int32_t rax_19

if (rcx_9 == 0)
    rax_19 = 0
else
    rax_19 = *(rcx_9 + 0x10)

int64_t* rcx_10 = data_143f0f180
int32_t var_40_1 = rax_19
int128_t* var_100 = &var_78
int32_t rax_20 = *(arg1 + 0x70)
int32_t var_110 = *(arg1 + 0x68) - r8_3
char var_118 = *(arg1 + 0x6c)
int32_t var_120 = rbx_3
int32_t var_128 = r11
int64_t var_e8
(*(*rcx_10 + 0x580))(rcx_10, &var_e8, &data_143f02b98)

if (arg1 + 0x80 != &var_e8)
    int64_t* rbx_4 = *(arg1 + 0x80)
    *(arg1 + 0x80) = var_e8
    var_e8 = 0
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            char rax_24
            
            if (rbx_4[2].b == 0 && data_143f0f1d0 == 0)
                rax_24 = sub_1405949a0()
            
            if (rbx_4[2].b != 0 || (data_143f0f1d0 == 0 && rax_24 != 0))
                (**rbx_4)(rbx_4, zx.q(r15))
            else
                bool z_1
                
                if (0 == *(rbx_4 + 0xc))
                    *(rbx_4 + 0xc) = r15
                    z_1 = true
                else
                    *(rbx_4 + 0xc)
                    z_1 = false
                
                if (z_1)
                    int32_t rax_26 = sub_140a20af0()
                    uint64_t rdx_6 = zx.q(rax_26)
                    void* const rax_27
                    
                    if (rax_26 != 0)
                        rax_27 = *((rdx_6 u>> 0xe << 3) + &data_143cf0bf8)
                            + (zx.q(rdx_6.d) & 0x3fff) * 0x18
                    else
                        rax_27 = nullptr
                    
                    *(rax_27 + 8) = rbx_4
                    sub_1405a42f0(&data_143f02390, rdx_6.d)

sub_14081c9d0(&var_e8)
sub_1408c8cf0(arg1 + 0x10, *(arg1 + 0x80))
*(*(arg1 + 0x10) + 0x58) = *(arg1 + 0x50)
int64_t var_90
int64_t* rax_33
int128_t zmm2
rax_33, zmm2 = sub_140b63b70(arg1 + 0x50, &var_90)
int16_t* const r8_4

if (rax_33[1].d == 0)
    r8_4 = &data_142d40450
else
    r8_4 = *rax_33

int64_t* rcx_18 = data_143f0f180
(*(*rcx_18 + 0x2e8))(rcx_18, *(arg1 + 0x10), r8_4)
int64_t rcx_19 = var_90

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

void* rdx_12 = *(arg1 + 0x88)
int128_t entry_zmm3

if (rdx_12 != 0)
    sub_14198ac20(&data_143f02b98, *(rdx_12 + 0x10), *(arg1 + 0x10), entry_zmm3, zmm2)

if (data_143f0f142 == 0)
    int64_t rsi_3 = sx.q(*(arg1 + 0x64))
    uint64_t rcx_20 = zx.q(*(arg1 + 0x6c)) * 5
    int32_t rax_36 = *((rcx_20 << 3) + 0x1439c85e8)
    int32_t rax_37 = *((rcx_20 << 3) + &data_1439c85ec)
    int32_t rax_38 = (&data_1439c85f4)[rcx_20 * 2]
    
    if (rsi_3.d s< *(arg1 + 0x68))
        void* r15_4 = arg1 + 0x98 + (rsi_3 << 3)
        
        do
            int64_t r12_2 = *r15_4
            
            if (r12_2 != 0)
                char rcx_21 = rsi_3.b
                int32_t r8_6 = *(arg1 + 0x60)
                uint32_t r9_1 = 1
                uint32_t rax_40 = *(arg1 + 0x58) u>> rcx_21
                uint32_t r11_1 = 1
                var_110.q = r12_2
                int64_t var_b8 = 0
                
                if (rax_40 u>= 1)
                    r9_1 = rax_40
                
                int64_t var_b0_1 = 0
                uint32_t rax_42 = *(arg1 + 0x5c) u>> rcx_21
                uint32_t var_a0_1 = r9_1
                int64_t var_a8_1 = 0
                
                if (rax_42 u>= 1)
                    r11_1 = rax_42
                
                uint32_t r8_7 = r8_6 u>> rcx_21
                uint32_t var_9c_1 = r11_1
                uint32_t rcx_22 = 1
                int32_t temp0_2 = divs.dp.d(sx.q(rax_36 - 1 + r9_1), rax_36)
                
                if (r8_7 u>= 1)
                    rcx_22 = r8_7
                
                uint32_t var_98_1 = rcx_22
                int64_t* rcx_23 = data_143f0f180
                var_118.d = divs.dp.d(sx.q(rax_37 - 1 + r11_1), rax_37) * temp0_2 * rax_38
                var_128.q = &var_b8
                (*(*rcx_23 + 0x548))(rcx_23, &data_143f02b98, *(arg1 + 0x80), 
                    zx.q(rsi_3.d - *(arg1 + 0x64)), var_128, temp0_2 * rax_38, var_118, var_110, 
                    rax_20, var_100, rax_38)
            
            rsi_3 = zx.q(rsi_3.d + 1)
            r15_4 += 8
        while (rsi_3.d s< *(arg1 + 0x68))
        
        r15 = 1
    
    (*(*(arg1 + 0x90) + 0x18))(arg1 + 0x90)

int64_t* rcx_25 = data_143f0f180
int32_t var_cc = 0x7f7fffff
char var_d8 = *(arg1 + 0x78)
int16_t var_d7 = 0
char var_d5 = 0
int64_t var_d4 = 0
int64_t var_c8 = 0
char var_c0 = 0
(*(*rcx_25 + 0x28))(rcx_25, &var_f0, &var_d8)

if (arg1 + 0x18 != &var_f0)
    int64_t* rbx_7 = *(arg1 + 0x18)
    *(arg1 + 0x18) = var_f0
    var_f0 = nullptr
    
    if (rbx_7 != 0)
        rbx_7[1].d -= 1
        
        if (rbx_7[1].d == 1)
            char rax_57
            
            if (rbx_7[2].b == 0 && data_143f0f1d0 == 0)
                rax_57 = sub_1405949a0()
            
            if (rbx_7[2].b != 0 || (data_143f0f1d0 == 0 && rax_57 != 0))
                (**rbx_7)(rbx_7, zx.q(r15))
            else
                bool z_2
                
                if (0 == *(rbx_7 + 0xc))
                    *(rbx_7 + 0xc) = r15
                    z_2 = true
                else
                    *(rbx_7 + 0xc)
                    z_2 = false
                
                if (z_2)
                    int32_t rax_59 = sub_140a20af0()
                    
                    if (rax_59 != 0)
                        r14 = *((zx.q(rax_59) u>> 0xe << 3) + &data_143cf0bf8)
                            + (zx.q(rax_59) & 0x3fff) * 0x18
                    
                    *(r14 + 8) = rbx_7
                    sub_1405a42f0(&data_143f02390, rax_59)

int64_t result = sub_1405d1550(&var_f0)
__security_check_cookie(rax_1 ^ &var_148)
return result
