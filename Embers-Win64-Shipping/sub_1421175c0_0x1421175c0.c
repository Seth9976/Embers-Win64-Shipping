// 函数: sub_1421175c0
// 地址: 0x1421175c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
void var_e8
sub_1421197f0(&var_e8, 6, arg4)
int32_t rdi = 0
int32_t var_110 = 0xffffffff
int32_t rsi = 0
int64_t var_120 = 0
int32_t var_118 = 0
sub_140d3cc80(sub_1425312f0(), &var_120, 1, 0x10, 0)
int32_t i = var_110 + 1
int64_t r8_2 = var_120
int32_t i_3 = i

if (i s< var_118)
    while (*(r8_2 + (sx.q(i) << 3)) == 0)
        int32_t i_5 = i + 1
        int32_t i_9 = i_5
        i = i_5
        
        if (i_5 s>= var_118)
            break

while (i s>= 0)
    if (i s>= var_118)
        break
    
    i += 1
    rsi += 1
    int32_t i_4 = i
    
    if (i s< var_118)
        while (*(r8_2 + (sx.q(i) << 3)) == 0)
            int32_t i_6 = i + 1
            int32_t i_10 = i_6
            i = i_6
            
            if (i_6 s>= var_118)
                break

if (r8_2 != 0)
    sub_140a74f90(r8_2)

void var_108
int64_t* rax_5 = _vfprintf_p_l(&var_108, Kicking off async material shader compiles...", Material")
sub_140b283e0(data_143ddb418, 0, rsi, rax_5)
int32_t r14 = 1
int64_t* var_100

if (var_100 != 0)
    var_100[1].d -= 1
    
    if (var_100[1].d == 1)
        (**var_100)(var_100)
        int32_t rax_8 = *(var_100 + 0xc)
        *(var_100 + 0xc) -= 1
        
        if (rax_8 == 1)
            (*(*var_100 + 8))(var_100, 1)

int64_t var_138 = 0
int32_t var_130 = 0
int32_t var_128 = 0xffffffff
int32_t rdx_4 = rsi s/ 0x14

if (rdx_4 s>= 1)
    r14 = rdx_4

sub_140d3cc80(sub_1425312f0(), &var_138, 1, 0x10, 0)
int32_t r8_5 = var_130
int32_t i_1 = var_128 + 1
int64_t rdx_6 = var_138
int32_t i_2 = i_1

if (i_1 s< r8_5)
    while (*(rdx_6 + (sx.q(i_1) << 3)) == 0)
        int32_t i_7 = i_1 + 1
        i_2 = i_7
        i_1 = i_7
        
        if (i_7 s>= r8_5)
            break

while (i_1 s>= 0)
    if (i_1 s>= r8_5)
        break
    
    int64_t* rbx_1 = *(rdx_6 + (sx.q(i_1) << 3))
    sub_14211e1f0(&var_e8, rbx_1)
    sub_14210db20(rbx_1, 0)
    
    if (mods.dp.d(sx.q(rdi), r14) == 0)
        sub_140b29c50(data_143ddb418, rdi, rsi)
    
    rdi += 1
    r8_5 = var_130
    i_1 = i_2 + 1
    rdx_6 = var_138
    i_2 = i_1
    
    if (i_1 s< r8_5)
        while (*(rdx_6 + (sx.q(i_1) << 3)) == 0)
            int32_t i_8 = i_1 + 1
            i_2 = i_8
            i_1 = i_8
            
            if (i_8 s>= r8_5)
                break

if (rdx_6 != 0)
    sub_140a74f90(rdx_6)

void* result = sub_14211a560(&var_e8)
__security_check_cookie(rax_1 ^ &var_168)
return result
