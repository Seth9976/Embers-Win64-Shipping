// 函数: sub_14013d1cb
// 地址: 0x14013d1cb
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char temp0_42 = arg2 & 2

if (temp0_42 != 0)
    arg7 = _mm_insert_ps(arg7, arg10, 0x10)
    
    if (temp0_42 != 0)
        goto label_14013d6ac
else if (temp0_42 != 0)
label_14013d6ac:
    arg4 = _mm_insert_ps(arg4, arg13, 0x10)
    
    if (temp0_42 != 0)
        goto label_14013d1e7
    
    goto label_14013d6b9

bool cond:4
bool cond:5
bool cond:6
bool cond:7

if (temp0_42 != 0)
label_14013d1e7:
    arg6 = _mm_insert_ps(arg6, arg12, 0x10)
    char temp2_1 = arg2 & 4
    cond:4 = temp2_1 == 0
    cond:5 = temp2_1 != 0
    cond:6 = temp2_1 == 0
    cond:7 = temp2_1 != 0
    
    if (temp2_1 != 0)
        goto label_14013d6c2
    
    goto label_14013d1f7

label_14013d6b9:
char temp1_1 = arg2 & 4
cond:4 = temp1_1 == 0
cond:5 = temp1_1 != 0
cond:6 = temp1_1 == 0
cond:7 = temp1_1 != 0

if (temp1_1 == 0)
label_14013d1f7:
    
    if (not(cond:4))
    label_14013d1fd:
        arg4 = _mm_insert_ps(arg4, arg17, 0x20)
        
        if (cond:7)
            goto label_14013d6d5
        
        goto label_14013d20a
else
label_14013d6c2:
    arg7 = __insertps_xmmps_memd_immb(arg7, __return_addr.d, 0x20)
    
    if (cond:5)
        goto label_14013d1fd

bool cond:8
bool cond:9
bool cond:10
bool cond:11

if (not(cond:6))
label_14013d6d5:
    arg6 = _mm_insert_ps(arg6, arg3, 0x20)
    char temp4_1 = arg2 & 8
    cond:8 = temp4_1 == 0
    cond:9 = temp4_1 != 0
    cond:10 = temp4_1 != 0
    cond:11 = temp4_1 == 0
    
    if (temp4_1 != 0)
        goto label_14013d213
    
    goto label_14013d6e4

label_14013d20a:
char temp3_1 = arg2 & 8
cond:8 = temp3_1 == 0
cond:9 = temp3_1 != 0
cond:10 = temp3_1 != 0
cond:11 = temp3_1 == 0

if (temp3_1 != 0)
label_14013d213:
    arg7 = __insertps_xmmps_memd_immb(arg7, arg19, 0x30)
    
    if (cond:9)
        goto label_14013d6ea
    
    goto label_14013d224

label_14013d6e4:

if (cond:8)
label_14013d224:
    
    if (cond:10)
        arg6 = _mm_insert_ps(arg6, arg16, 0x30)
else
label_14013d6ea:
    arg4 = __insertps_xmmps_memd_immb(arg4, arg18, 0x30)
    
    if (not(cond:11))
        arg6 = _mm_insert_ps(arg6, arg16, 0x30)

arg7 = _mm_sub_ps(arg7, arg8)
arg4 = _mm_sub_ps(arg4, arg14)
arg7 = _mm_mul_ps(arg7, arg15)
arg3 = arg8
char temp5 = arg1 & 1
float zmm5[0x4]

if (temp5 != 0)
    arg3 = arg8
    arg3[0] = arg3[0] + arg7[0]
    arg6 = _mm_sub_ps(arg6, arg9)
    arg4 = _mm_mul_ps(arg4, arg15)
    zmm5 = arg14
    
    if (temp5 != 0)
        goto label_14013d8e1
    
    goto label_14013d72d

arg6 = _mm_sub_ps(arg6, arg9)
arg4 = _mm_mul_ps(arg4, arg15)
zmm5 = arg14

if (temp5 != 0)
label_14013d8e1:
    zmm5 = arg14
    zmm5[0] = zmm5[0] + arg4[0]
    arg15 = _mm_mul_ps(arg15, arg6)
    arg6 = arg9
    
    if (temp5 != 0)
        goto label_14013d73a
    
    goto label_14013d8f6

label_14013d72d:
arg15 = _mm_mul_ps(arg15, arg6)
arg6 = arg9
bool cond:16
bool cond:17
bool cond:18
bool cond:19

if (temp5 != 0)
label_14013d73a:
    arg6 = arg9
    arg6[0].d = arg6[0].d f+ arg15[0]
    arg8 = _mm_add_ps(arg8, arg7)
    char temp7_1 = arg1 & 2
    cond:16 = temp7_1 == 0
    cond:17 = temp7_1 != 0
    cond:18 = temp7_1 == 0
    cond:19 = temp7_1 != 0
    
    if (temp7_1 != 0)
        goto label_14013d902
    
    goto label_14013d74e

label_14013d8f6:
arg8 = _mm_add_ps(arg8, arg7)
char temp6_1 = arg1 & 2
cond:16 = temp6_1 == 0
cond:17 = temp6_1 != 0
cond:18 = temp6_1 == 0
cond:19 = temp6_1 != 0

if (temp6_1 != 0)
label_14013d902:
    arg3 = _mm_blend_ps(arg3, arg8, 2)
    arg14 = _mm_add_ps(arg14, arg4)
    
    if (cond:17)
        goto label_14013d758
    
    goto label_14013d912

label_14013d74e:
arg14 = _mm_add_ps(arg14, arg4)

if (not(cond:16))
label_14013d758:
    zmm5 = _mm_blend_ps(zmm5, arg14, 2)
    arg9 = _mm_add_ps(arg9, arg15)
    
    if (cond:19)
        goto label_14013d91c
    
    goto label_14013d769

label_14013d912:
arg9 = _mm_add_ps(arg9, arg15)
bool cond:20
bool cond:21
bool cond:22
bool cond:23

if (not(cond:18))
label_14013d91c:
    arg6 = _mm_blend_ps(arg6, arg9, 2)
    char temp9_1 = arg1 & 4
    cond:20 = temp9_1 == 0
    cond:21 = temp9_1 != 0
    cond:22 = temp9_1 == 0
    cond:23 = temp9_1 != 0
    
    if (temp9_1 != 0)
        goto label_14013d772
    
    goto label_14013d92b

label_14013d769:
char temp8_1 = arg1 & 4
cond:20 = temp8_1 == 0
cond:21 = temp8_1 != 0
cond:22 = temp8_1 == 0
cond:23 = temp8_1 != 0

if (temp8_1 == 0)
label_14013d92b:
    
    if (not(cond:20))
    label_14013d931:
        zmm5 = _mm_blend_ps(zmm5, arg14, 4)
        
        if (cond:23)
            goto label_14013d784
        
        goto label_14013d93e
else
label_14013d772:
    arg3 = _mm_blend_ps(arg3, arg8, 4)
    
    if (cond:21)
        goto label_14013d931

bool cond:24
bool cond:25
bool cond:26
bool cond:27

if (not(cond:22))
label_14013d784:
    arg6 = _mm_blend_ps(arg6, arg9, 4)
    char temp11_1 = arg1 & 8
    cond:24 = temp11_1 == 0
    cond:25 = temp11_1 != 0
    cond:26 = temp11_1 != 0
    cond:27 = temp11_1 == 0
    
    if (temp11_1 != 0)
        goto label_14013d947
    
    goto label_14013d793

label_14013d93e:
char temp10_1 = arg1 & 8
cond:24 = temp10_1 == 0
cond:25 = temp10_1 != 0
cond:26 = temp10_1 != 0
cond:27 = temp10_1 == 0

if (temp10_1 != 0)
label_14013d947:
    arg8 = _mm_blend_ps(arg8, arg3, 7)
    
    if (cond:25)
        goto label_14013d79c
    
    goto label_14013d953

label_14013d793:
arg8 = arg3

if (cond:24)
label_14013d953:
    arg14 = zmm5
    
    if (cond:26)
        arg6 = _mm_blend_ps(arg6, arg9, 8)
else
label_14013d79c:
    arg14 = _mm_blend_ps(arg14, zmm5, 7)
    
    if (not(cond:27))
        arg6 = _mm_blend_ps(arg6, arg9, 8)

arg9 = arg6
arg6 = zx.o(0)
arg7 = _mm_unpacklo_ps(arg9, arg6[0])
arg3 = _mm_unpackhi_ps(arg9, arg6)
arg6 = _mm_unpacklo_ps(arg8, arg14[0].q)
arg8 = _mm_unpackhi_ps(arg8, arg14)
float arg_130[0x4] = _mm_insert_ps(arg6, arg9, 0x28)
double arg_140[0x2] = _mm_unpackhi_pd(arg6, arg7[0].q)
double arg_150[0x2] = _mm_insert_ps(arg8, arg9, 0xa8)
float arg_160[0x4] = _mm_unpackhi_pd(arg8, arg3[0].q)
uint64_t i = zx.q(_mm_movemask_ps(arg11))
int64_t result

do
    uint64_t rcx_1
    uint64_t rflags_1
    
    if (i == 0)
        rcx_1 = 0x40
    else
        rcx_1, rflags_1 = _bit_scan_forward(i)
    int128_t zmm4
    int128_t arg_120 = zmm4
    result = sx.q(*(&arg_120 + ((zx.q(rcx_1.d) & 3) << 2))) * 0x30
    *(arg5 + result + 0x10) = (&arg_130)[rcx_1]
    i &= rol.q(-2, rcx_1.b)
while (i != 0)

return result
