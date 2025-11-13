// 函数: sub_14176b960
// 地址: 0x14176b960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rcx = arg5
*arg2 = 0
int128_t zmm4 = arg3[0].o
int32_t rax = rcx[4]
uint64_t r8 = zx.q(rcx[5])
int32_t rdx = rcx[6]
int32_t* var_70
int64_t var_58
int64_t* rax_1
float zmm0[0x4]
int32_t zmm1[0x8]
float zmm3[0x4]

if (rax != 2)
    if (rax == 1 && r8.d == rax && rdx == rax)
        float zmm6[0x4] = (*arg1)[0x23]
        zmm3 = zx.o(0)
        zmm6[0] = zmm6[0] - arg1[8][0]
        int128_t zmm7
        zmm7.d = arg1[9][0].d f- (*arg1)[0x21]
        int128_t zmm8
        zmm8.d = (*arg1)[0x25].d f- (*arg1)[0x22]
        arg3[0].o = zmm7
        zmm6[0] = zmm6[0] * zmm6[0]
        var_58 = 0
        arg3[0] = arg3[0] f* zmm7.d
        int32_t var_50_1 = 0
        zmm1[0].o = zmm8
        zmm1[0] = zmm1[0] f* zmm8.d
        arg3[0] = arg3[0] f+ zmm6[0]
        arg3[0] = arg3[0] f+ zmm1[0]
        float temp0_1[0x4] = _mm_sqrt_ss(0, arg3[0])
        
        if (not(temp0_1[0] <= 9.99999975e-05f))
            arg3[0].o = 0x3f800000
            zmm3 = temp0_1
            arg3[0] = 1f / temp0_1[0]
            zmm1[0].o = arg3[0].o
            zmm0 = arg3[0].o
            zmm1[0] = zmm1[0] f* zmm6[0]
            zmm0[0] = zmm0[0] f* zmm7.d
            arg3[0] = arg3[0] f* zmm8.d
            var_58.d = zmm1[0]
            var_58:4.d = zmm0[0]
            int32_t var_50_2 = arg3[0]
        
        zmm3[0] = zmm3[0] f- rcx[7]
        float temp0_2[0x4] = _mm_max_ss(zmm3[0], 0)
        
        if (__andps_xmmxud_memxud(temp0_2, data_142d3f770)[0] <= (*arg1)[0x63])
        label_14176bc95:
            *(arg2 + 4) = 1
            *arg2 = 0
            return arg2
        
        if (rcx[0xe].b == 0)
            zmm1[0].o = arg4[0xb]
            
            if (not(zmm1[0] f> 0f))
                zmm1[0].o = *rcx
            
            sub_14176b2c0(arg1, zmm1[0].o, &var_58, temp0_2)
            int32_t rcx_6 = *(arg2 + 4)
            *arg2 += 1
            *(arg2 + 4) = rcx_6
            return arg2
        
        arg3[0].o = arg4[0x10]
        
        if (not(arg3[0] f> 0f))
            arg3[0].o = rcx[0x11]
        
        zmm0 = arg4[0x11]
        
        if (not(zmm0[0] > 0f))
            zmm0 = rcx[0x12]
        
        zmm1[0].o = zmm4
        rcx.b = rcx[0xf] == 0
        sub_140038d90(arg1, zmm1, arg3, zmm0, rcx.b, &var_58, temp0_2[0], &(*arg1)[0x26])
        int32_t rcx_8 = *(arg2 + 4)
        *arg2 += 1
        *(arg2 + 4) = rcx_8
        return arg2
    
label_14176bca6:
    
    if (r8.d != 2 || rdx != r8.d)
        goto label_14176bce1
    
    if (rax == r8.d)
        goto label_14176bce6
    
    int32_t* var_60_2 = rcx
    int32_t* var_68_3 = arg4
    var_70.d = r8.d
label_14176bcd7:
    rax_1 = sub_14176aa30(arg1, &arg5, r8.d, 0, rax, var_70)
    *arg2 += *rax_1
    *(arg2 + 4) += *(rax_1 + 4)
else if (r8.d != rax)
label_14176bce1:
    
    if (rax != 2)
    label_14176bd54:
        
        if (r8.d == 1 && rdx == r8.d)
            if (rax == r8.d)
                goto label_14176bd7f
            
            int32_t* var_60_5 = rcx
            int32_t* var_68_6 = arg4
            var_70.d = r8.d
            goto label_14176bcd7
        
        if (rax != 1)
        label_14176bdee:
            int32_t var_78_8
            int32_t* var_70_4
            int32_t* var_68_9
            int32_t r9_4
            
            if (rax == 2 || rax == 1)
                var_68_9 = rcx
                var_70_4 = arg4
                r9_4 = 0
                var_78_8 = rax
            label_14176be52:
                rax_1 = sub_14176afe0(arg1, &arg5, r8, r9_4, var_78_8, var_70_4, var_68_9)
                *arg2 += *rax_1
                *(arg2 + 4) += *(rax_1 + 4)
            else
                if ((r8 - 1).d u<= 1)
                    var_68_9 = rcx
                    var_70_4 = arg4
                    r9_4 = 1
                    var_78_8 = r8.d
                    goto label_14176be52
                
                if (rdx - 1 u<= 1)
                    var_68_9 = rcx
                    var_70_4 = arg4
                    r9_4 = 2
                    var_78_8 = rdx
                    goto label_14176be52
        else
        label_14176bd7f:
            
            if (rdx != 1 || r8.d == rdx)
                if (rax != 1 || r8.d != rax || rdx == rax)
                    goto label_14176bdee
                
                int32_t* var_60_7 = rcx
                int32_t* var_68_8 = arg4
                var_70.d = rax
                rax_1 = sub_14176aa30(arg1, &arg5, r8.d, rax + 1, rdx, var_70)
                *arg2 += *rax_1
                *(arg2 + 4) += *(rax_1 + 4)
            else
                int32_t* var_60_6 = rcx
                int32_t* var_68_7 = arg4
                var_70.d = rdx
                rax_1 = sub_14176aa30(arg1, &arg5, r8.d, rdx, r8.d, var_70)
                *arg2 += *rax_1
                *(arg2 + 4) += *(rax_1 + 4)
    else
    label_14176bce6:
        
        if (rdx != 2 || r8.d == rdx)
            if (rax != 2 || r8.d != rax || rdx == rax)
                goto label_14176bd54
            
            int32_t* var_60_4 = rcx
            int32_t* var_68_5 = arg4
            var_70.d = rax
            rax_1 = sub_14176aa30(arg1, &arg5, r8.d, rax, rdx, var_70)
            *arg2 += *rax_1
            *(arg2 + 4) += *(rax_1 + 4)
        else
            int32_t* var_60_3 = rcx
            int32_t* var_68_4 = arg4
            var_70.d = rdx
            rax_1 = sub_14176aa30(arg1, &arg5, r8.d, rdx - 1, r8.d, var_70)
            *arg2 += *rax_1
            *(arg2 + 4) += *(rax_1 + 4)
else
    if (rdx != rax)
        goto label_14176bca6
    
    if (0f != (*arg1)[0x1e])
        if (0f != (*arg1)[0x1f])
            arg3[0].o = arg4[0xb]
            
            if (not(arg3[0] f> 0f))
                arg3[0].o = *rcx
            
            zmm3 = (*arg1)[0x23]
            zmm3[0] = zmm3[0] - arg1[8][0]
            zmm4.d = arg1[9][0].d f- (*arg1)[0x21]
            zmm1[0].o = (*arg1)[0x25]
            zmm1[0] = zmm1[0] f- (*arg1)[0x22]
            zmm0 = (*arg1)[0x63]
            var_58.d = zmm3[0]
            var_58:4.d = zmm4.d
            zmm4.d = zmm4.d f* zmm4.d
            zmm3[0] = zmm3[0] * zmm3[0]
            int32_t var_50 = zmm1[0]
            zmm1[0] = zmm1[0] f* zmm1[0]
            zmm4.d = zmm4.d f+ zmm3[0]
            zmm0[0] = zmm0[0] * zmm0[0]
            zmm4.d = zmm4.d f+ zmm1[0]
            
            if (zmm4.d f<= zmm0[0])
                goto label_14176bc95
            
            sub_140038c20(arg1, &var_58, arg3)
            int32_t rcx_4 = *(arg2 + 4)
            *arg2 += 1
            *(arg2 + 4) = rcx_4
            return arg2
        
        int32_t* var_68_2 = rcx
        rax_1 = sub_14176b1c0(arg1, &arg5, 1, 0, zmm4.d, arg4)
        *arg2 += *rax_1
        *(arg2 + 4) += *(rax_1 + 4)
    else
        int32_t* var_68_1 = rcx
        rax_1 = sub_14176b1c0(arg1, &arg5, 0, 1, zmm4.d, arg4)
        *arg2 += *rax_1
        *(arg2 + 4) += *(rax_1 + 4)
return arg2
