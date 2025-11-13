// 函数: sub_140f2d8d0
// 地址: 0x140f2d8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = arg2.o
double zmm7[0x2]
double var_38[0x2] = zmm7
int128_t zmm8 = 0x7f7fffff
int128_t zmm9 = 0xff7fffff
int32_t arg_18
int128_t zmm2

if ((arg3 & 0xfffffffd) == 0)
    arg_18 = 0x7f7fffff
    int32_t* rax_1 = sub_140f466a0(arg1 + 0x528)
    
    if (rax_1[1].b == 0)
        zmm7 = 0x7f7fffff
    else
        zmm7 = *rax_1
    
    arg_18 = 0xff7fffff
    int32_t* rax_2 = sub_140f466a0(arg1 + 0x508)
    
    if (rax_2[1].b == 0)
        arg2.o = 0xff7fffff
    else
        arg2.o = *rax_2
    
    zmm2 = _mm_cvtps_pd(arg2.q)
    int128_t zmm0_1 = _mm_cvtps_pd(zmm7[0])
    
    if (not(zmm6.q f>= zmm2.q))
        zmm6 = zmm2
    else if (not(zmm6.q f< zmm0_1.q))
        zmm6 = zmm0_1

arg_18 = 0x7f7fffff
int32_t* rax_3 = sub_140f466a0(arg1 + 0x4e8)

if (rax_3[1].b == 0)
    zmm7 = 0x7f7fffff
else
    zmm7 = *rax_3

arg_18 = 0xff7fffff
int32_t* rax_4
int64_t rdx
rax_4, rdx = sub_140f466a0(arg1 + 0x4c8)
double zmm0_2[0x2]

if (rax_4[1].b == 0)
    zmm0_2 = 0xff7fffff
else
    zmm0_2 = *rax_4

arg2.o = _mm_cvtps_pd(zmm7[0])
zmm7 = _mm_cvtps_pd(zmm0_2[0])

if (not(zmm6.q f< zmm7[0]))
    zmm7 = _mm_min_sd(arg2.o[0], zmm6.q)

int64_t* rsi = nullptr

if (*(arg1 + 0x3a0) == 0)
label_140f2da06:
    zmm6 = _mm_cvtpd_ps(zmm7)
    
    if (*(arg1 + 0x3a0) != 0)
        int64_t* rcx_5 = *(arg1 + 0x398)
        
        if (rcx_5 != 0)
            rdx = (*(*rcx_5 + 0x38))(rcx_5, 0)
            int64_t rcx_6 = *(arg1 + 0x398)
            
            if (rcx_6 != 0)
                int64_t rax_8
                rax_8, rdx, zmm0_2 = sub_140a84c80(rcx_6, 0, 0)
                *(arg1 + 0x398) = rax_8
            
            *(arg1 + 0x3a0) = 0
    
    *(arg1 + 0x390) = zmm6.d
    *(arg1 + 0x394) = 1
else
    int64_t* rcx_4 = *(arg1 + 0x398)
    
    if (rcx_4 == 0)
        goto label_140f2da06
    
    char rax_6
    rax_6, rdx = (*(*rcx_4 + 0x28))(rcx_4)
    
    if (rax_6 == 0)
        goto label_140f2da06

if (*(arg1 + 0x3a0) != 0)
    int64_t* rcx_7 = *(arg1 + 0x398)
    
    if (rcx_7 != 0)
        char rax_10
        rax_10, rdx = (*(*rcx_7 + 0x28))(rcx_7)
        
        if (rax_10 != 0)
            int64_t* rcx_8
            
            if (*(arg1 + 0x3a0) == 0)
                rcx_8 = nullptr
            else
                rcx_8 = *(arg1 + 0x398)
            
            rdx = (*(*rcx_8 + 0x48))(rcx_8)
            *(arg1 + 0x390) = zmm0_2[0].d

if (arg3 == 0)
    zmm0_2 = *(arg1 + 0x390)
    
    if (not(zmm0_2[0].d f== *(arg1 + 0x628)))
        zmm7 = _mm_cvtps_pd(zmm0_2[0])

*(arg1 + 0x618) = zmm7.q

if (*(arg1 + 0x598) != 0)
    int64_t* rcx_9 = *(arg1 + 0x590)
    
    if (rcx_9 != 0)
        char rax_13
        rax_13, rdx = (*(*rcx_9 + 0x28))(rcx_9)
        
        if (rax_13 != 0)
            int64_t* rcx_10
            
            if (*(arg1 + 0x598) == 0)
                rcx_10 = nullptr
            else
                rcx_10 = *(arg1 + 0x590)
            
            char rax_15
            rax_15, rdx = (*(*rcx_10 + 0x48))(rcx_10)
            *(arg1 + 0x588) = rax_15

if ((arg3 & 0xfffffffd) == 0 || *(arg1 + 0x588) != 0)
    if (*(arg1 + 0x460) != 0)
        int64_t* rcx_11 = *(arg1 + 0x458)
        
        if (rcx_11 != 0)
            char rax_17
            rax_17, rdx = (*(*rcx_11 + 0x28))(rcx_11)
            
            if (rax_17 != 0)
                int64_t* rcx_12
                
                if (*(arg1 + 0x460) == 0)
                    rcx_12 = nullptr
                else
                    rcx_12 = *(arg1 + 0x458)
                
                rdx = (*(*rcx_12 + 0x48))(rcx_12)
                *(arg1 + 0x450) = zmm0_2[0].d
    
    zmm2 = *(arg1 + 0x450)
    arg2.o = zx.o(0)
    
    if (not(zmm2.d f== 0f))
        arg2.o = _mm_cvtps_pd(zmm2.q)
        zmm0_2 = sub_140f61a50(zmm7, arg2.o)
        zmm7 = zmm0_2

if (*(arg1 + 0x5b0) != 0)
    int64_t* rcx_13 = *(arg1 + 0x5a8)
    
    if (rcx_13 != 0)
        char rax_20
        rax_20, rdx = (*(*rcx_13 + 0x28))(rcx_13)
        
        if (rax_20 != 0)
            int64_t* rcx_14
            
            if (*(arg1 + 0x5b0) == 0)
                rcx_14 = nullptr
            else
                rcx_14 = *(arg1 + 0x5a8)
            
            char rax_22
            rax_22, rdx = (*(*rcx_14 + 0x48))(rcx_14)
            *(arg1 + 0x5a0) = rax_22

int32_t zmm0_3

if (*(arg1 + 0x5a0) != 0)
    if (*(arg1 + 0x3a0) != 0)
        int64_t* rcx_15 = *(arg1 + 0x398)
        
        if (rcx_15 != 0 && (*(*rcx_15 + 0x28))(rcx_15) != 0)
            int64_t* rcx_16
            
            if (*(arg1 + 0x3a0) == 0)
                rcx_16 = nullptr
            else
                rcx_16 = *(arg1 + 0x398)
            
            (*(*rcx_16 + 0x48))(rcx_16)
            *(arg1 + 0x390) = zmm0_2[0].d
    
    arg_18 = 0x7f7fffff
    int32_t* rax_26
    rax_26, rdx = sub_140f466a0(arg1 + 0x528)
    
    if (rax_26[1].b == 0)
        zmm0_3 = 0x7f7fffff
    else
        zmm0_3 = *rax_26

if (*(arg1 + 0x5a0) == 0 || zmm0_3 f>= *(arg1 + 0x390))
    if (*(arg1 + 0x5c8) != 0)
        int64_t* rcx_21 = *(arg1 + 0x5c0)
        
        if (rcx_21 != 0)
            char rax_30
            rax_30, rdx = (*(*rcx_21 + 0x28))(rcx_21)
            
            if (rax_30 != 0)
                int64_t* rcx_22
                
                if (*(arg1 + 0x5c8) == 0)
                    rcx_22 = nullptr
                else
                    rcx_22 = *(arg1 + 0x5c0)
                
                char rax_32
                rax_32, rdx = (*(*rcx_22 + 0x48))(rcx_22)
                *(arg1 + 0x5b8) = rax_32
    
    if (*(arg1 + 0x5b8) != 0)
        arg_18 = 0xff7fffff
        int32_t* rax_33
        int32_t zmm0_5
        rax_33, zmm0_5 = sub_140f466a0(arg1 + 0x508)
        
        if (rax_33[1].b == 0)
            zmm6 = 0xff7fffff
        else
            zmm6 = *rax_33
        
        int32_t* rax_34
        rax_34, rdx = sub_140eff5d0(arg1 + 0x390, zmm0_5)
        
        if (not(zmm6.d f<= *rax_34))
            arg_18 = 0xff7fffff
            int32_t* rax_35
            int32_t zmm0_6
            rax_35, zmm0_6 = sub_140f466a0(arg1 + 0x508)
            
            if (rax_35[1].b != 0)
                zmm9 = *rax_35
            
            arg2.o = *sub_140eff5d0(arg1 + 0x390, zmm0_6)
            arg2.d = arg2.d f- zmm9.d
            rdx, arg2, zmm7 = sub_140f2b070(arg1, arg2.o, 1)
else
    arg_18 = 0x7f7fffff
    int32_t* rax_27
    int32_t zmm0_4
    rax_27, zmm0_4 = sub_140f466a0(arg1 + 0x528)
    
    if (rax_27[1].b != 0)
        zmm8 = *rax_27
    
    arg2.o = *sub_140eff5d0(arg1 + 0x390, zmm0_4)
    arg2.d = arg2.d f- zmm8.d
    rdx, arg2, zmm7 = sub_140f2ae30(arg1, arg2.o, 1)

zmm6.d = fconvert.s(zmm7[0])

if (arg3 - 1 u<= 1)
    arg2.o = zmm6
    zmm6 = sub_140f44690(arg1 + 0x3b8, rdx, zx.q(arg4))

arg2.o = zmm6
int32_t zmm0_7
int32_t zmm6_1
zmm0_7, zmm6_1 = sub_140f44620(arg1 + 0x3a8, arg2)

if (*(arg1 + 0x3a0) == 0)
label_140f2dd7a:
    
    if (*(arg1 + 0x3a0) != 0)
        int64_t* rcx_31 = *(arg1 + 0x398)
        
        if (rcx_31 != 0)
            (*(*rcx_31 + 0x38))(rcx_31, 0)
            int64_t rcx_32 = *(arg1 + 0x398)
            
            if (rcx_32 != 0)
                int64_t rax_41
                rax_41, zmm0_7 = sub_140a84c80(rcx_32, 0, 0)
                *(arg1 + 0x398) = rax_41
            
            *(arg1 + 0x3a0) = 0
    
    *(arg1 + 0x390) = zmm6_1
    *(arg1 + 0x394) = 1
else
    int64_t* rcx_30 = *(arg1 + 0x398)
    
    if (rcx_30 == 0)
        goto label_140f2dd7a
    
    if ((*(*rcx_30 + 0x28))(rcx_30) == 0)
        goto label_140f2dd7a

if (*(arg1 + 0x3a0) != 0)
    int64_t* rcx_33 = *(arg1 + 0x398)
    
    if (rcx_33 != 0 && (*(*rcx_33 + 0x28))(rcx_33) != 0)
        if (*(arg1 + 0x3a0) != 0)
            rsi = *(arg1 + 0x398)
        
        (*(*rsi + 0x48))(rsi)
        *(arg1 + 0x390) = zmm0_7

*(arg1 + 0x628) = *(arg1 + 0x390)
char result = sub_140e19840(arg1, arg2)

if (result == 0)
    *(arg1 + 0x608) = result
    *(arg1 + 0x60c) = 0xffffffff

return result
