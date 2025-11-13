// 函数: sub_1428b8120
// 地址: 0x1428b8120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x78)
void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
char* const rsi = &data_1437020ab
int32_t i_3 = 0
int32_t var_88 = 0
int32_t i_10 = 0
int64_t r8 = arg5

if (arg8 s>= 0)
    i_10 = arg8

int32_t r11 = 0
int32_t i_12 = 0

if ((arg9.b & 0x40) == 0)
    if (r8 s< 0)
        var_88 = 0x2d
        r8 = neg.q(r8)
    else if ((arg9.b & 2) == 0)
        if ((arg9.b & 4) != 0)
            r11 = 0x20
        
        var_88 = r11
    else
        var_88 = 0x2b

uint64_t rdx = zx.q(arg6)

if ((arg9.b & 8) != 0)
    char* rax_3 = &(*U""\tv 0")[4]
    
    if (rdx.d != 8)
        rax_3 = &data_1437020ab
    
    rsi = &data_143467b98
    
    if (rdx.d != 0x10)
        rsi = rax_3

char const* const rdi = "0123456789abcdef"
int64_t i = 0

if ((arg9.b & 0x20) != 0)
    rdi = "0123456789ABCDEF"

char var_78[0x20]
int32_t i_8

do
    int64_t rdx_1 = 0
    uint64_t temp1_1 = modu.dp.q(rdx_1:r8, rdx)
    i_8 = i_12
    i_12 += 1
    r8 = divu.dp.q(rdx_1:r8, rdx)
    var_78[i] = rdi[temp1_1]
    i += 1
    
    if (r8 == 0)
        break
while (i s< 0x1a)

int32_t r11_2 = var_88

if (i_8 != 0x19)
    i_8 = i_12

int64_t i_4 = sx.q(i_8)

if (i_4 u>= 0x1a)
    __report_rangecheckfailure()
    noreturn

int64_t rdx_3 = -1
var_78[i_4] = 0
int32_t i_7 = i_10 - i_8

do
    rdx_3 += 1
while (rsi[rdx_3] != 0)

if (i_10 s>= i_8)
    i_8 = i_10

int32_t rax_8
rax_8.b = r11_2 != 0
int32_t i_13 = arg7 - i_8 - rax_8 - rdx_3.d

if (i_7 s>= 0)
    i_3 = i_7

int32_t i_6 = 0
int32_t i_11 = 0

if (i_13 s>= 0)
    i_11 = i_13

int32_t rcx_4 = arg9 & 0x10

if (rcx_4 != 0)
    int32_t i_5 = i_11
    
    if (i_3 s>= i_11)
        i_5 = i_3
    
    i_3 = i_5

if (rcx_4 == 0)
    i_6 = i_11

int32_t rbx
rbx.b = arg9.b & 1
int32_t i_1 = neg.d(i_6)

if (rbx.b == 0)
    i_1 = i_6

if (i_1 s> 0)
    do
        if (sub_1428b7920(arg1, arg2, arg3, arg4, 0x20) == 0)
            goto label_1428b8415
        
        i_1 -= 1
    while (i_1 s> 0)
    
    r11_2 = var_88

int32_t rax_10

if (r11_2 != 0)
    rax_10 = sub_1428b7920(arg1, arg2, arg3, arg4, r11_2.b)

int64_t result

if (r11_2 != 0 && rax_10 == 0)
label_1428b8415:
    result = 0
else
    char i_2 = *rsi
    
    while (i_2 != 0)
        if (sub_1428b7920(arg1, arg2, arg3, arg4, i_2) == 0)
            goto label_1428b8415
        
        i_2 = rsi[1]
        rsi = &rsi[1]
    
    for (; i_3 s> 0; i_3 -= 1)
        if (sub_1428b7920(arg1, arg2, arg3, arg4, 0x30) == 0)
            goto label_1428b8415
    
    while (i_4 s> 0)
        void var_79
        char rax_14 = *(&var_79 + i_4)
        i_4 -= 1
        
        if (sub_1428b7920(arg1, arg2, arg3, arg4, rax_14) == 0)
            goto label_1428b8415
    
    if (i_1 s< 0)
        int32_t i_9
        
        do
            if (sub_1428b7920(arg1, arg2, arg3, arg4, 0x20) == 0)
                goto label_1428b8415
            
            i_9 = i_1
            i_1 += 1
        while (i_9 + 1 s< 0)
    
    result = 1

__security_check_cookie(rax_1 ^ &var_b8)
return result
