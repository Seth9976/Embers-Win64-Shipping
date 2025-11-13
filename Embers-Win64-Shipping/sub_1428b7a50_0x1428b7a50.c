// 函数: sub_1428b7a50
// 地址: 0x1428b7a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xb8)
void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
uint128_t zmm2 = zx.o(arg5)
int32_t i_26 = 0
int32_t i_18 = 0
int32_t r11 = 0
int32_t i_23 = 0
int32_t var_ac = 0
int32_t i_19 = 6

if (arg7 s>= 0)
    i_19 = arg7

int32_t var_b4

if (0.0 f<= zmm2.q)
    char rax_3 = arg8.b
    
    if ((rax_3 & 2) == 0)
        int32_t rax_4 = 0
        
        if ((rax_3 & 4) != 0)
            rax_4 = 0x20
        
        var_b4 = rax_4
    else
        var_b4 = 0x2b
else
    var_b4 = 0x2d

double i_1 = 10.0
uint128_t zmm4 = 0x3ff0000000000000
int32_t var_b8
int32_t rax_5
uint128_t zmm0

if (arg9 == 2)
    zmm2.q f- 0.0
    
    if (not(is_unordered.q(zmm2.q, 0.0)) && not(zmm2.q f!= 0.0))
        rax_5 = 0
        var_b8 = 0
    else if (0x3f1a36e2eb1c432d f<= zmm2.q)
        bool cond:7_1 = i_19 s<= 0
        
        if (i_19 != 0)
            goto label_1428b7b51
        
        if (zmm2.q f>= i_1)
            rax_5 = 1
            var_b8 = 1
        else
            cond:7_1 = i_19 s<= 0
        label_1428b7b51:
            
            if (cond:7_1)
                rax_5 = 0
                var_b8 = 0
            else
                int32_t i_10 = i_19
                zmm0 = zmm4
                int32_t i
                
                do
                    zmm0.q = zmm0.q f* i_1
                    i = i_10
                    i_10 -= 1
                while (i != 1)
                
                if (zmm2.q f< zmm0.q)
                    rax_5 = 0
                    var_b8 = 0
                else
                    rax_5 = 1
                    var_b8 = 1
    else
        rax_5 = 1
        var_b8 = 1
    
    goto label_1428b7b80

rax_5 = arg9
int32_t i_22 = i_19
var_b8 = rax_5

if (arg9 == 0)
    goto label_1428b7c20

label_1428b7b80:
zmm2.q f- 0.0
zmm0 = zmm2

if (is_unordered.q(zmm2.q, 0.0) || not(zmm2.q f== 0.0))
    if (not(zmm4.q f<= zmm2.q))
        do
            zmm0.q = zmm0.q f* i_1
            r11 -= 1
        while (zmm4.q f> zmm0.q)
        
        var_ac = r11
    
    if (not(zmm0.q f<= i_1))
        do
            zmm0.q = zmm0.q f/ i_1
            r11 += 1
        while (zmm0.q f> i_1)
        
        var_ac = r11

i_22 = i_19

if (arg9 != 2)
    goto label_1428b7c15

if (i_19 == 0)
    i_22 = 1

int64_t result

if (rax_5 != 0)
    i_22 -= 1
label_1428b7c15:
    
    if (rax_5 != 1)
        goto label_1428b7c20
    
    zmm2 = zmm0
label_1428b7c20:
    
    if (not(0.0 f<= zmm2.q))
        zmm2 ^= data_142d8e3c0
    
    if (zmm2.q f> 4294967295.0)
    labelid_1:
        result = 0
    else
        int64_t zmm3 = zmm4.q
        int32_t rbx_1 = (int.q(zmm2.q)).d
        
        if (i_22 s> 9)
            i_22 = 9
        
        int32_t i_11 = i_22
        
        if (i_22 != 0)
            int32_t i_2
            
            do
                zmm3 = zmm3 f* i_1
                i_2 = i_11
                i_11 -= 1
            while (i_2 != 1)
        
        int64_t zmm5 = 0x3fe0000000000000
        int32_t rax_7 = int.d(zmm3)
        int32_t rdx = rax_7 + 1
        
        if (zmm3 f- _mm_cvtepi32_pd(zx.q(rax_7)).q f< zmm5)
            rdx = rax_7
        
        int32_t i_12 = i_22
        
        if (i_22 != 0)
            int32_t i_3
            
            do
                zmm4.q = zmm4.q f* i_1
                i_3 = i_12
                i_12 -= 1
            while (i_3 != 1)
        
        int32_t r9 = rbx_1 + 1
        zmm0.q = float.d(zx.q(rbx_1))
        zmm2.q = zmm2.q f- zmm0.q
        zmm2.q = zmm2.q f* zmm4.q
        int32_t rax_9 = int.d(zmm2.q)
        int32_t rcx_2 = rax_9 + 1
        zmm2.q = zmm2.q f- _mm_cvtepi32_pd(zx.q(rax_9)).q
        
        if (zmm2.q f< zmm5)
            rcx_2 = rax_9
        
        int32_t r8_1 = rcx_2 - rdx
        
        if (rcx_2 u< rdx)
            r8_1 = rcx_2
        
        if (rcx_2 u< rdx)
            r9 = rbx_1
        
        char var_98[0x17]
        int32_t i_21
        
        for (int64_t i_4 = 0; i_4 s< 0x14; )
            i_21 = i_26
            uint64_t rdx_2 = zx.q(r9 u/ 0xa)
            i_26 += 1
            char rax_12 = (*"0123456789")[zx.q(r9 - (rdx_2 * 5).d * 2)]
            r9 = rdx_2.d
            var_98[i_4] = rax_12
            i_4 += 1
            
            if (rdx_2.d == 0)
                break
        
        if (i_21 != 0x13)
            i_21 = i_26
        
        int64_t i_13 = sx.q(i_21)
        char var_80[0x17]
        int32_t i_16
        int64_t i_7
        
        if (i_13 u< 0x14)
            var_98[i_13] = 0
            
            if (i_22 s> 0)
                int64_t r9_2 = 0
                
                while (true)
                    if (arg9 == 2 && r9_2 == 0)
                        uint64_t rdx_4 = zx.q(r8_1 u/ 0xa)
                        
                        if (r8_1 == (rdx_4 * 5).d * 2)
                            i_22 -= 1
                            r8_1 = rdx_4.d
                            
                            if (i_23 s>= i_22)
                                break
                            
                            continue
                    
                    i_23 += 1
                    uint64_t rdx_6 = zx.q(r8_1 u/ 0xa)
                    char rax_16 = (*"0123456789")[zx.q(r8_1 - (rdx_6 * 5).d * 2)]
                    r8_1 = rdx_6.d
                    var_80[r9_2] = rax_16
                    r9_2 += 1
                    
                    if (i_23 s>= i_22)
                        break
            
            i_16 = 0x13
            
            if (i_23 != 0x14)
                i_16 = i_23
            
            i_7 = sx.q(i_16)
        
        if (i_13 u>= 0x14 || i_7 u>= 0x14)
            __report_rangecheckfailure()
            noreturn
        
        var_80[i_7] = 0
        int32_t i_25
        
        if (var_b8 != 1)
            i_25 = i_18
        else
            int32_t temp7_1
            int32_t temp8_1
            temp7_1:temp8_1 = sx.q(var_ac)
            int32_t rcx_7 = (temp8_1 ^ temp7_1) - temp7_1
            int64_t r8_3 = 0
            i_25 = 0
            
            while (true)
                i_25 += 1
                i_18 = i_25
                uint64_t rdx_10 = zx.q(rcx_7 s/ 0xa)
                char rax_24 = (*"0123456789")[sx.q(rcx_7 - (rdx_10 * 5).d * 2)]
                rcx_7 = rdx_10.d
                void var_68
                *(&var_68 + r8_3) = rax_24
                r8_3 += 1
                
                if (rdx_10.d s<= 0)
                    if (i_25 == 1)
                        i_25 = 2
                        char var_67_1 = 0x30
                        i_18 = 2
                    
                    break
                
                if (r8_3 s>= 0x14)
                    goto label_1428b7bdf_2
        
        int32_t rax_25
        rax_25.b = var_b4 != 0
        int32_t rax_26
        rax_26.b = i_22 s> 0
        int32_t i_24 = arg6 - rax_25 - rax_26 - i_21 - i_22
        
        if (var_b8 == 1)
            i_24 += 0xfffffffe - i_25
        
        int32_t i_8 = 0
        char r9_3 = arg8.b
        
        if (i_22 - i_16 s>= 0)
            i_8 = i_22 - i_16
        
        int32_t i_20 = 0
        
        if (i_24 s>= 0)
            i_20 = i_24
        
        int32_t i_15 = neg.d(i_20)
        
        if ((r9_3 & 1) == 0)
            i_15 = i_20
        
        int32_t i_5
        
        if ((r9_3 & 0x10) == 0 || i_15 s<= 0)
            i_5 = i_15
            
            if (i_15 s> 0)
                do
                    if (sub_1428b7920(arg1, arg2, arg3, arg4, 0x20) == 0)
                        goto label_1428b7bdf_2
                    
                    i_5 -= 1
                while (i_5 s> 0)
            
            goto label_1428b7f2c
        
        i_5 = i_15
        
        if (var_b4 == 0)
            goto label_1428b7ed0
        
        if (sub_1428b7920(arg1, arg2, arg3, arg4, var_b4.b) == 0)
        labelid_1:
            result = 0
        else
            i_5 -= 1
            var_b4 = 0
        label_1428b7ed0:
            
            for (; i_5 s> 0; i_5 -= 1)
                if (sub_1428b7920(arg1, arg2, arg3, arg4, 0x30) == 0)
                    goto label_1428b7bdf_2
            
        label_1428b7f2c:
            
            if (var_b4 == 0)
            label_1428b7f4d:
                
                for (int64_t i_6 = i_13; i_6 s> 0; i_6 -= 1)
                    if (sub_1428b7920(arg1, arg2, arg3, arg4, var_98[i_6 - 1]) == 0)
                        goto label_1428b7bdf_2
                
                if (i_22 s> 0 || (arg8.b & 8) != 0)
                    if (sub_1428b7920(arg1, arg2, arg3, arg4, 0x2e) != 0)
                        while (i_7 s> 0)
                            void var_81
                            char rax_40 = *(&var_81 + i_7)
                            i_7 -= 1
                            
                            if (sub_1428b7920(arg1, arg2, arg3, arg4, rax_40) == 0)
                                goto label_1428b7bdf_2
                        
                        goto label_1428b7ffe
                    
                labelid_1:
                    result = 0
                else
                label_1428b7ffe:
                    
                    for (; i_8 s> 0; i_8 -= 1)
                        if (sub_1428b7920(arg1, arg2, arg3, arg4, 0x30) == 0)
                            goto label_1428b7bdf_2
                    
                    if (var_b8 != 1)
                    label_1428b80dc:
                        
                        if (i_5 s< 0)
                            int32_t i_17
                            
                            do
                                if (sub_1428b7920(arg1, arg2, arg3, arg4, 0x20) == 0)
                                    goto label_1428b7bdf_2
                                
                                i_17 = i_5
                                i_5 += 1
                            while (i_17 + 1 s< 0)
                        
                        result = 1
                    else if (sub_1428b7920(arg1, arg2, arg3, arg4, ((not.d(arg8)).b & 0x20) | 0x45)
                        == 0)
                    labelid_1:
                        result = 0
                    else if (var_ac s>= 0)
                        if (sub_1428b7920(arg1, arg2, arg3, arg4, 0x2b) != 0)
                        label_1428b8097:
                            int64_t i_14 = sx.q(i_18)
                            int64_t i_9 = i_14
                            
                            if (i_14.d s> 0)
                                do
                                    void var_69
                                    char rax_46 = *(&var_69 + i_9)
                                    i_9 -= 1
                                    
                                    if (sub_1428b7920(arg1, arg2, arg3, arg4, rax_46) == 0)
                                        goto label_1428b7bdf_2
                                while (i_9 s> 0)
                            
                            goto label_1428b80dc
                        
                    labelid_1:
                        result = 0
                    else
                        if (sub_1428b7920(arg1, arg2, arg3, arg4, 0x2d) != 0)
                            goto label_1428b8097
                        
                    label_1428b7bdf:
                        result = 0
            else
                if (sub_1428b7920(arg1, arg2, arg3, arg4, var_b4.b) != 0)
                    goto label_1428b7f4d
                
            label_1428b7bdf_1:
                result = 0
else
    int32_t i_27 = i_22
    i_22 += 0xffffffff - r11
    
    if (i_27 + 0xffffffff - r11 s>= 0)
        goto label_1428b7c20
    
label_1428b7bdf_2:
    result = 0

__security_check_cookie(rax_1 ^ &var_e8)
return result
