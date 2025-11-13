// 函数: sub_1417b1510
// 地址: 0x1417b1510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
uint64_t result = zx.q(arg3[1].b)
int64_t* rbx = nullptr
int64_t* r10 = nullptr

if (result.b == 1)
    r10 = arg3

int64_t var_c8
int64_t var_b8
int32_t var_b0
int64_t* var_a8
uint64_t var_a0
void var_58
int64_t r9_1

if (r10 != 0)
    int64_t rax_2 = sx.q(arg2[1].d)
    var_c8 = 0
    int32_t i_6 = 0
    int64_t rdx = rax_2 * 3
    int64_t rcx = *(*arg2 + 0x140)
    arg1 = zx.o(*(rcx + (rdx << 3)))
    int32_t var_98_1 = *(rcx + (rdx << 3) + 8)
    int32_t var_8c_1 = *(rcx + (rdx << 3) + 0x14)
    var_a8 = &var_c8
    void* var_78_1 = &var_58
    int16_t var_5c_1 = 0
    char var_5a_1 = 0
    int32_t var_b0_1 = var_b0
    var_a0 = arg1.q
    int64_t** var_d0_1 = &var_a8
    uint64_t var_94_1 = *(rcx + (rdx << 3) + 0xc)
    uint64_t* var_d8_1 = &var_a0
    uint64_t var_b8_1 = var_b8
    int64_t rcx_2
    int512_t zmm0
    int128_t zmm6_1
    result, rcx_2, zmm0, zmm6_1 = sub_1416ece20(r10, rdx, arg3)
    int64_t i_3 = sx.q(i_6)
    r9_1 = var_c8
    
    if (i_3 s> 0)
        int64_t rsi_1 = 0
        int64_t i
        
        do
            int64_t* r8 = *(rsi_1 + r9_1 + 8)
            uint64_t* rax_7 = nullptr
            
            if (*(r8 + 0xc) u>= 2)
                rax_7 = r8
            
            if (rax_7 != 0)
                result = *rax_7
                rcx_2 = *(result + 0x398)
            
            if (rax_7 == 0 || *(sx.q(rax_7[1].d) + rcx_2) != 4)
                void* r11_1 = *arg2
                int64_t r10_1 = sx.q(arg2[1].d)
                
                if (*(*(r11_1 + 0x80) + (r10_1 << 3)) == 0)
                    result = *r8
                    rcx_2 = *(result + 0x80)
                
                if (*(*(r11_1 + 0x80) + (r10_1 << 3)) != 0 || *(rcx_2 + (sx.q(r8[1].d) << 3)) != 0)
                    result = *(r11_1 + 0xc8)
                    int64_t* rdx_3 = *(result + (r10_1 << 3))
                    
                    if (rdx_3 != r8)
                        zmm0.o = zmm6_1
                        result, rcx_2, zmm0, zmm6_1 = sub_1417b1900(rcx_2, rdx_3, r8)
                        r9_1 = var_c8
            
            rsi_1 += 0x28
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    goto label_1417b18a8

int64_t* rcx_3 = nullptr

if (result.b == 0)
    rcx_3 = arg3

if (rcx_3 != 0)
    int64_t rax_9 = sx.q(arg2[1].d)
    var_c8 = 0
    int32_t i_7 = 0
    int64_t r8_1 = rax_9 * 3
    int64_t rdx_4 = *(*arg2 + 0x140)
    int32_t var_98_2 = *(rdx_4 + (r8_1 << 3) + 8)
    int32_t var_8c_2 = *(rdx_4 + (r8_1 << 3) + 0x14)
    var_a0 = *(rdx_4 + (r8_1 << 3))
    arg1 = zx.o(*(rdx_4 + (r8_1 << 3) + 0xc))
    var_a8 = &var_c8
    uint64_t var_94_2 = arg1.q
    int64_t rcx_4
    int512_t zmm0_1
    int128_t zmm6_2
    result, rcx_4, zmm0_1, zmm6_2 = sub_1416e8d10(rcx_3, &var_a0, &var_a8)
    int64_t i_4 = sx.q(i_7)
    r9_1 = var_c8
    
    if (i_4 s> 0)
        int64_t rsi_2 = 0
        int64_t i_1
        
        do
            int64_t* r8_3 = *(rsi_2 + r9_1 + 8)
            uint64_t* rax_13 = nullptr
            
            if (*(r8_3 + 0xc) u>= 2)
                rax_13 = r8_3
            
            if (rax_13 != 0)
                result = *rax_13
                rcx_4 = *(result + 0x398)
            
            if (rax_13 == 0 || *(sx.q(rax_13[1].d) + rcx_4) != 4)
                void* r11_2 = *arg2
                int64_t r10_2 = sx.q(arg2[1].d)
                
                if (*(*(r11_2 + 0x80) + (r10_2 << 3)) == 0)
                    result = *r8_3
                    rcx_4 = *(result + 0x80)
                
                if (*(*(r11_2 + 0x80) + (r10_2 << 3)) != 0
                        || *(rcx_4 + (sx.q(r8_3[1].d) << 3)) != 0)
                    result = *(r11_2 + 0xc8)
                    int64_t* rdx_8 = *(result + (r10_2 << 3))
                    
                    if (rdx_8 != r8_3)
                        zmm0_1.o = zmm6_2
                        result, rcx_4, zmm0_1, zmm6_2 = sub_1417b1900(rcx_4, rdx_8, r8_3)
                        r9_1 = var_c8
            
            rsi_2 += 0x28
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
    
    goto label_1417b18a8

int64_t* r10_3 = nullptr

if (result.b == 2)
    r10_3 = arg3

if (r10_3 == 0)
    if (result.b == 3)
        rbx = arg3
    
    if (rbx != 0)
        int512_t zmm1
        zmm1.o = arg1
        result = (*(*rbx + 0x90))(rbx, zmm1, arg2)
else
    int64_t rax_15 = sx.q(arg2[1].d)
    var_c8 = 0
    int32_t i_8 = 0
    int64_t rdx_9 = rax_15 * 3
    int64_t rcx_5 = *(*arg2 + 0x140)
    arg1 = zx.o(*(rcx_5 + (rdx_9 << 3)))
    int32_t var_98_3 = *(rcx_5 + (rdx_9 << 3) + 8)
    int32_t var_8c_3 = *(rcx_5 + (rdx_9 << 3) + 0x14)
    var_a8 = &var_c8
    void* var_78_2 = &var_58
    int16_t var_5c_2 = 0
    char var_5a_2 = 0
    int32_t var_b0_2 = var_b0
    var_a0 = arg1.q
    int64_t** var_d0_2 = &var_a8
    uint64_t var_94_3 = *(rcx_5 + (rdx_9 << 3) + 0xc)
    uint64_t* var_d8_2 = &var_a0
    uint64_t var_b8_2 = var_b8
    int64_t rcx_7
    int512_t zmm0_2
    int128_t zmm6_3
    result, rcx_7, zmm0_2, zmm6_3 = sub_1416ed270(r10_3, rdx_9, arg3)
    int64_t i_5 = sx.q(i_8)
    r9_1 = var_c8
    
    if (i_5 s> 0)
        int64_t rsi_3 = 0
        int64_t i_2
        
        do
            int64_t* r8_4 = *(rsi_3 + r9_1 + 8)
            int64_t* rax_20 = nullptr
            
            if (*(r8_4 + 0xc) u>= 2)
                rax_20 = r8_4
            
            if (rax_20 != 0)
                result = *rax_20
                rcx_7 = *(result + 0x398)
            
            if (rax_20 == 0 || *(sx.q(rax_20[1].d) + rcx_7) != 4)
                void* r11_3 = *arg2
                int64_t r10_4 = sx.q(arg2[1].d)
                
                if (*(*(r11_3 + 0x80) + (r10_4 << 3)) == 0)
                    result = *r8_4
                    rcx_7 = *(result + 0x80)
                
                if (*(*(r11_3 + 0x80) + (r10_4 << 3)) != 0
                        || *(rcx_7 + (sx.q(r8_4[1].d) << 3)) != 0)
                    result = *(r11_3 + 0xc8)
                    int64_t* rdx_12 = *(result + (r10_4 << 3))
                    
                    if (rdx_12 != r8_4)
                        zmm0_2.o = zmm6_3
                        result, rcx_7, zmm0_2, zmm6_3 = sub_1417b1900(rcx_7, rdx_12, r8_4)
                        r9_1 = var_c8
            
            rsi_3 += 0x28
            i_2 = i_5
            i_5 -= 1
        while (i_2 != 1)
    
label_1417b18a8:
    
    if (r9_1 != 0)
        result = sub_140a74f90(r9_1)

__security_check_cookie(rax_1 ^ &var_f8)
return result
