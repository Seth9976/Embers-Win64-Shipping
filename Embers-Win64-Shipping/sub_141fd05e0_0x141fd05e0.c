// 函数: sub_141fd05e0
// 地址: 0x141fd05e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t* rdx = arg2[1]
int32_t var_100 = arg4
int32_t* r8 = *rdx

if (&r8[1] u<= rdx[1])
    *(arg1 + 0x760) = *r8
    int64_t* rax_4 = arg2[1]
    *rax_4 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x760, arg5)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x760, 4)

int64_t* rcx_1 = arg2[1]
int32_t* rdx_2 = *rcx_1

if (&rdx_2[1] u> rcx_1[1])
    int32_t* rdx_3 = &var_100
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_3, arg5)
    else
        (*(*arg2 + 0x150))(arg2, rdx_3, 4)
else
    var_100 = *rdx_2
    *rcx_1 += 4

void* const rbx = *(**(arg1 + 0x90) + 0x68)
void* rax_10
int64_t rax_11
void* rdx_4

if (rbx != 0)
    rax_10 = sub_14254d5d0()
    rdx_4 = *(rbx + 0x10)
    rax_11 = sx.q(*(rax_10 + 0x38))

if (rbx == 0 || rax_11.d s> *(rdx_4 + 0x38) || *(*(rdx_4 + 0x30) + (rax_11 << 3)) != rax_10 + 0x30)
    rbx = nullptr

int512_t zmm1
int512_t zmm2
int128_t zmm6
zmm1, zmm2, zmm6 = sub_1421605c0(rbx, arg2)
int32_t i
int32_t var_f0
int64_t* rax_14
void* r14

if (*(arg1 + 0xe28) == 0)
    i = *(arg1 + 0xac0) - *(arg1 + 0xaec)
    (*(*arg2 + 0x168))(arg2, &i)
    r14 = nullptr
    
    if (i u> 0)
        do
            void* rbx_2 = *(*(*(arg1 + 0x140) + 0x98) + (sx.q(r14.d) << 3))
            uint64_t var_d0
            sub_1420e4db0(rbx_2, &var_d0)
            int512_t zmm1_1
            zmm1_1, zmm2, zmm6 = sub_140b63b70(rbx_2 + 0x50, &var_f0)
            int512_t zmm1_3 = sub_140a1d9d0(arg2, &var_f0, sub_140a1d9d0(arg2, &var_d0, zmm1_1))
            int64_t* rcx_14 = arg2[1]
            int32_t* rdx_14 = *rcx_14
            
            if (&rdx_14[1] u<= rcx_14[1])
                *(rbx_2 + 0x80) = *rdx_14
                int64_t* rax_23 = arg2[1]
                *rax_23 += 4
            else if ((*(arg2 + 0x29) & 0x20) != 0)
                sub_140b54070(arg2, rbx_2 + 0x80, zmm1_3)
            else
                (*(*arg2 + 0x150))(arg2, rbx_2 + 0x80, 4)
            
            int64_t* rcx_16 = arg2[1]
            int32_t* r8_2 = *rcx_16
            
            if (&r8_2[1] u<= rcx_16[1])
                *(rbx_2 + 0x84) = *r8_2
                int64_t* rax_27 = arg2[1]
                *rax_27 += 4
            else if ((*(arg2 + 0x29) & 0x20) != 0)
                sub_140b54070(arg2, rbx_2 + 0x84, zmm1_3)
            else
                (*(*arg2 + 0x150))(arg2, rbx_2 + 0x84, 4)
            
            int64_t* rcx_18 = arg2[1]
            int32_t* r8_3 = *rcx_18
            
            if (&r8_3[1] u<= rcx_18[1])
                *(rbx_2 + 0x88) = *r8_3
                int64_t* rax_31 = arg2[1]
                *rax_31 += 4
            else if ((*(arg2 + 0x29) & 0x20) != 0)
                sub_140b54070(arg2, rbx_2 + 0x88, zmm1_3)
            else
                (*(*arg2 + 0x150))(arg2, rbx_2 + 0x88, 4)
            
            int64_t* rcx_20 = arg2[1]
            int32_t* r8_4 = *rcx_20
            
            if (&r8_4[1] u<= rcx_20[1])
                *(rbx_2 + 0x8c) = *r8_4
                int64_t* rax_35 = arg2[1]
                *rax_35 += 4
            else if ((*(arg2 + 0x29) & 0x20) != 0)
                sub_140b54070(arg2, rbx_2 + 0x8c, zmm1_3)
            else
                (*(*arg2 + 0x150))(arg2, rbx_2 + 0x8c, 4)
            
            sub_1408d9160(arg2, rbx_2 + 0x90, zmm1_3)
            sub_1408d9160(arg2, rbx_2 + 0xa0, zmm1_3)
            
            if ((arg2[5].b & 1) != 0)
                zmm1_3.o = data_143f3d240
                uint32_t temp0_1[0x4] = _mm_and_ps(*(rbx_2 + 0x90), zmm1_3.o)
                zmm1_3.o = __andps_xmmxud_memxud(zmm1_3.o, *(rbx_2 + 0xa0))
                *(rbx_2 + 0xa0) = zmm1_3.o
                *(rbx_2 + 0x90) = temp0_1
            
            int64_t rcx_24 = var_f0.q
            
            if (rcx_24 != 0)
                sub_140a74f90(rcx_24)
            
            uint64_t rcx_25 = var_d0
            
            if (rcx_25 != 0)
                sub_140a74f90(rcx_25)
            
            r14 = zx.q(r14.d + 1)
        while (r14.d u< i)
    
    rax_14, zmm1 = sub_141fb06f0(arg1 + 0xab8, 0)
else
    int32_t rsi_1 = *(arg1 + 0xd68)
    (*(*arg2 + 0x168))(arg2, arg1 + 0xe80)
    
    for (int32_t i_1 = rsi_1 - *(arg1 + 0xe80); i_1 u< rsi_1; i_1 += 1)
        rax_14, zmm1 = sub_140a1d9d0(arg2, *(arg1 + 0xd60) + sx.q(i_1) * 0x18, zmm1)
    
    *(arg1 + 0xe80) = 0

int512_t zmm0_2

if (*(arg1 + 0xe28) != 0)
    rax_14, zmm0_2 = j_sub_140a82f30(0x10)

int64_t* r12

if (*(arg1 + 0xe28) == 0 || rax_14 == 0)
    r12 = nullptr
else
    r12 = sub_141fa5000(rax_14, arg2, zmm0_2, zmm1)

int32_t rbx_4 = 0

while (true)
    if (rbx_4 s< 0 || rbx_4 s>= *(arg1 + 0xe90))
        rax_14.b = 0
    else
        rax_14.b = 1
    
    if (rax_14.b == 0)
        break
    
    r14 = *(arg1 + 0xe88) + sx.q(rbx_4) * 0xc
    rax_14 = sub_140d3c6e0(r14)
    
    if (rax_14 != 0)
        sub_1405ba450(arg1 + 0x3c8, &i, rax_14)
        int64_t i_3 = sx.q(i)
        void* const rsi_2
        
        if (i_3.d == 0xffffffff)
            rsi_2 = nullptr
        else
            rsi_2 = *(arg1 + 0x3c8) + i_3 * 0x28
        
        void* rsi_3 = *(rsi_2 + 8)
        rax_14 = zx.q(*(rsi_3 + 0x30))
        int32_t var_e0 = rax_14.d
        
        if (rax_14.d != 0)
            (*(*arg2 + 0x168))(arg2, &var_e0)
            (*(*arg2 + 0x168))(arg2, r14 + 8)
            (*(*arg2 + 0x150))(arg2, *(rsi_3 + 0x20), sx.q(*(rsi_3 + 0x28)))
            bool cond:5_1 = *(rsi_3 + 0x2c) == 0
            *(rsi_3 + 0x28) = 0
            
            if (not(cond:5_1))
                sub_1405c5510(rsi_3 + 0x20, 0)
            
            *(rsi_3 + 0x30) = 0
    
    rbx_4 += 1

*(arg1 + 0xe90) = 0

if (*(arg1 + 0xe94) s<= 0xffffffff)
    sub_14083ad30(arg1 + 0xe88, 0)

int64_t rax_43 = *arg2
var_f0 = 0
(*(rax_43 + 0x168))(arg2, &var_f0)

if (r12 != 0)
    sub_141fa67e0(r12, zmm1)
    zmm1 = j_sub_140a74f90(r12)

if (*(arg1 + 0xe2a) != 0)
    int64_t rax_45 = (*(*arg2 + 0x20))(arg2)
    int64_t* rdx_29 = arg2[1]
    var_f0.q = 0
    int64_t* r8_7 = *rdx_29
    
    if (&r8_7[1] u> rdx_29[1])
        int64_t* rdx_30 = &var_f0
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b540d0(arg2, rdx_30, zmm1)
        else
            (*(*arg2 + 0x150))(arg2, rdx_30, 8)
    else
        var_f0.q = *r8_7
        *rdx_29 += 8
    
    if ((arg6 & 1) == 0)
        r14.b = 0
        int32_t rdx_31 = data_143a30450
        int32_t rcx_44 = data_143a3045c + 1
        int64_t r15_1 = *(arg1 + 0x140)
        int128_t var_58_1 = zmm6
        zmm6 = var_100
        int64_t var_b8
        __builtin_memset(&var_b8, 0, 0x2c)
        int32_t var_84_1 = 0
        int64_t var_78_1 = 0
        int32_t var_70_1 = 0
        int32_t var_8c_1 = 0x80
        int32_t var_88_1 = 0xffffffff
        data_143a3045c = rcx_44
        int64_t rsi_4 = sx.q(rdx_31 - 1)
        
        if (rdx_31 - 1 s>= 0)
            int64_t rbx_6 = rsi_4 << 4
            int64_t temp1_1
            
            do
                int64_t* rcx_45 = data_143a30448
                
                if (*(rcx_45 + rbx_6 + 8) == 0)
                    r14.b = 1
                else
                    int64_t* rcx_46 = *(rcx_45 + rbx_6)
                    
                    if (rcx_46 == 0)
                        r14.b = 1
                    else
                        zmm2.o = zmm6
                        
                        if ((*(*rcx_46 + 0x50))(rcx_46, r15_1, zmm2, &var_b8) == 0)
                            r14.b = 1
                
                rbx_6 -= 0x10
                temp1_1 = rsi_4
                rsi_4 -= 1
            while (temp1_1 - 1 s>= 0)
            rcx_44 = data_143a3045c
            rdx_31 = data_143a30450
        
        data_143a3045c = rcx_44 - 1
        
        if (r14.b != 0 && rcx_44 - 1 s<= 0)
            int32_t rsi_5 = 0
            int32_t r14_1 = rdx_31
            
            if (rdx_31 s> 0)
                int64_t rbx_7 = 0
                
                do
                    int64_t* rcx_48 = data_143a30448
                    
                    if (*(rcx_48 + rbx_7 + 8) == 0)
                        zmm1 = sub_1405a4880(&data_143a30448, rsi_5, 1, 1)
                    else
                        int64_t* rcx_49 = *(rcx_48 + rbx_7)
                        
                        if (rcx_49 == 0)
                            zmm1 = sub_1405a4880(&data_143a30448, rsi_5, 1, 1)
                        else if ((*(*rcx_49 + 0x20))(rcx_49) != 0)
                            zmm1 = sub_1405a4880(&data_143a30448, rsi_5, 1, 1)
                        else
                            rsi_5 += 1
                            rbx_7 += 0x10
                    
                    rdx_31 = data_143a30450
                while (rsi_5 s< rdx_31)
            
            int32_t rax_52 = rdx_31 * 2
            
            if (rax_52 s<= 2)
                rax_52 = 2
            
            data_143a30458 = rax_52
            
            if (r14_1 s> rax_52 && data_143a30454 != rdx_31)
                sub_1405a5410(&data_143a30448, rdx_31)
        
        sub_141fa7dc0(arg2, &var_b8, zmm1)
        int32_t var_70_2 = 0
        
        if (var_78_1 != 0)
            sub_140a74f90(var_78_1)
        
        zmm1 = sub_141cdb8d0(&var_b8, 0)
        int64_t var_98
        
        if (var_98 != 0)
            zmm1 = sub_140a74f90(var_98)
        
        int64_t rcx_54 = var_b8
        
        if (rcx_54 != 0)
            zmm1 = sub_140a74f90(rcx_54)
    
    int64_t rax_54 = (*(*arg2 + 0x20))(arg2)
    int64_t r8_8 = *arg2
    var_f0.q = rax_54 - rax_45 - 8
    (*(r8_8 + 0x178))(arg2, rax_45, r8_8)
    int64_t* rdx_36 = arg2[1]
    int64_t* rax_55 = *rdx_36
    
    if (&rax_55[1] u> rdx_36[1])
        int64_t* rdx_37 = &var_f0
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b540d0(arg2, rdx_37, zmm1)
        else
            (*(*arg2 + 0x150))(arg2, rdx_37, 8)
    else
        var_f0.q = *rax_55
        *rdx_36 += 8
    
    (*(*arg2 + 0x178))(arg2, rax_54)

int64_t* rbx_9 = *arg3
int64_t rsi_6 = sx.q(arg3[1].d)
void* r14_2 = &rbx_9[rsi_6 * 5]

if (rbx_9 != r14_2)
    do
        if (*(arg1 + 0xe28) != 0)
            (*(*arg2 + 0x168))(arg2, rbx_9 + 0x24)
        
        int64_t* rcx_65 = arg2[1]
        int64_t rsi_7 = *rbx_9
        i = rbx_9[1].d
        int32_t* rdx_40 = *rcx_65
        
        if (&rdx_40[1] u> rcx_65[1])
            int32_t* rdx_41 = &i
            
            if ((*(arg2 + 0x29) & 0x20) != 0)
                sub_140b54070(arg2, rdx_41, zmm1)
            else
                (*(*arg2 + 0x150))(arg2, rdx_41, 4)
        else
            i = *rdx_40
            *rcx_65 += 4
        
        (*(*arg2 + 0x150))(arg2, rsi_7, sx.q(i))
        rbx_9 = &rbx_9[5]
    while (rbx_9 != r14_2)
    
    rsi_6 = zx.q(arg3[1].d)
    rbx_9 = *arg3

if (rsi_6.d != 0)
    int32_t i_2
    
    do
        int64_t rcx_68 = *rbx_9
        
        if (rcx_68 != 0)
            zmm1 = sub_140a74f90(rcx_68)
        
        rbx_9 = &rbx_9[5]
        i_2 = rsi_6.d
        rsi_6 = zx.q(rsi_6.d - 1)
    while (i_2 != 1)

arg3[1].d = 0

if (*(arg3 + 0xc) != 0)
    sub_1405c5660(arg3, 0)

if (*(arg1 + 0xe28) != 0)
    int64_t rax_65 = *arg2
    var_f0 = 0
    (*(rax_65 + 0x168))(arg2, &var_f0)

int64_t* rcx_71 = arg2[1]
int32_t result_1 = 0
int32_t* rdx_44 = *rcx_71
int32_t result

if (&rdx_44[1] u> rcx_71[1])
    int32_t* rdx_45 = &result_1
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        result = sub_140b54070(arg2, rdx_45, zmm1)
    else
        result = (*(*arg2 + 0x150))(arg2, rdx_45, 4)
else
    result = *rdx_44
    result_1 = result
    *rcx_71 += 4

__security_check_cookie(rax_1 ^ &var_128)
return result
