// 函数: sub_1423c86d0
// 地址: 0x1423c86d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x58)
double zmm6[0x2] = zx.o(0)
int64_t* i_1 = nullptr
void* rcx
double zmm0[0x2]
double zmm1[0x2]
int32_t zmm2

for (; i != 0; i = *(rcx + 0x18))
    rcx = i[4]
    zmm6[0].d = zmm6[0].d f+ *(rcx + 0x20)
    
    if ((*(i + 0xa) & 1) == 0)
        i_1 = i
    else
        *(rcx + 0x10) = 0
        zmm1 = *arg2
        int64_t rsi_1
        
        if (zmm6[0].d f>= zmm1[0].d)
            rsi_1 = sx.q(*(arg1 + 0xb8))
            zmm6[0].d = zmm6[0].d f- zmm1[0].d
            char var_ec_1 = 0
            int32_t rax_9 = (rsi_1 + 1).d
            *(arg1 + 0xb8) = rax_9
            int32_t var_f0_1 = zmm6[0].d
            
            if (rax_9 s> *(arg1 + 0xbc))
                sub_1405a4f90(arg1 + 0xb0)
            
            zmm0 = i.o
        else
            void* rcx_1 = i[4]
            int32_t rax_1 = data_143de5458.d
            int64_t* arg_20 = nullptr
            *(rcx_1 + 4) = rax_1
            *(i[4] + 8) = data_143de5458.d
            zmm1 = *arg2
            
            if (0f f!= *(i + 0xc))
                void* rax_4 = arg2[1].q
                
                if ((*(i + 0xa) & 1) == 0)
                    zmm0 = *(rax_4 + 0x520)
                else
                    zmm0 = *(rax_4 + 0x524)
                
                void* rax_5 = i[4]
                zmm2 = *(rax_5 + 0x24)
                
                if (not(zmm2 f< 0f))
                    zmm1 = zmm0
                    zmm1[0].d = zmm1[0].d f- zmm2
                
                *(rax_5 + 0x24) = zmm0[0].d
            else
                *(i[4] + 0x24) = 0xbf800000
            
            (*(*i + 8))(i, zmm1, zx.q(*(arg2 + 4)), 2, &arg_20)
            int64_t* rcx_4 = arg_20
            
            if (rcx_4 != 0)
                rcx_4[9].d -= 1
                
                if (rcx_4[9].d == 1)
                    zmm6 = sub_140a2f6e0(rcx_4)
            
            zmm1 = *arg2
            zmm0 = *(i + 0xc)
            zmm1[0].d = zmm1[0].d f- zmm6[0].d
            rsi_1 = sx.q(*(arg1 + 0xb8))
            char var_84_1 = 0
            int32_t rax_8 = (rsi_1 + 1).d
            zmm0[0].d = zmm0[0].d f- zmm1[0].d
            *(arg1 + 0xb8) = rax_8
            int32_t var_88_1 = zmm0[0].d
            
            if (rax_8 s> *(arg1 + 0xbc))
                sub_1405a4f90(arg1 + 0xb0)
            
            zmm0 = i.o
        
        *(*(arg1 + 0xb0) + rsi_1 * 0x10) = zmm0
        int64_t rax_12 = *(i[4] + 0x18)
        
        if (i_1 == 0)
            *(arg1 + 0x58) = rax_12
        else
            *(i_1[4] + 0x18) = rax_12
        
        rcx = i[4]
        void* rax_13 = *(rcx + 0x18)
        
        if (rax_13 != 0)
            zmm0 = *(rcx + 0x20)
            void* rax_14 = *(rax_13 + 0x20)
            zmm0[0].d = zmm0[0].d f+ *(rax_14 + 0x20)
            *(rax_14 + 0x20) = zmm0[0].d
            rcx = i[4]
            zmm6[0].d = zmm6[0].d f- *(rcx + 0x20)

int32_t r10 = *(arg1 + 0x30)
void* r9 = arg1 + 0x18
int32_t rcx_10 = 0
int32_t var_e8 = 0
int32_t r8_2 = 0
int32_t var_e4 = 1
void* var_e0 = r9
int32_t var_d8 = 0xffffffff
int64_t var_d4 = 0

if (r10 != 0)
    void* rax_15 = *(r9 + 0x10)
    
    if (rax_15 != 0)
        r9 = rax_15
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r10 - 1)
    int32_t rdx_4 = *r9
    
    if (rdx_4 != 0)
    label_1423c8979:
        int32_t rax_22 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_22)
        int32_t var_e4_1 = rax_22
        int32_t arg_18 = temp0_2
        int32_t rax_23
        
        if (rax_22 == 0)
            rax_23 = 0x20
        else
            rax_23 = 0x1f - temp0_2
        
        var_d4.d = r8_2 - rax_23 + 0x1f
        
        if (r8_2 - rax_23 + 0x1f s> r10)
            var_d4.d = r10
    else
        while (true)
            int64_t rdx_5 = sx.q(rcx_10)
            r8_2 += 0x20
            rcx_10 += 1
            var_d4:4.d = r8_2
            var_e8 = rcx_10
            
            if (rdx_5.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r9 + (rdx_5 << 2) + 4)
            int32_t var_d8_1 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_1423c8979
        
        var_d4.d = r10

int128_t var_68 = 0xffffffff
double var_78[0x2] = var_e8.o
double var_c0[0x2] = (arg1 + 8).o
int64_t var_a0 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q

if (0 s< r10)
    do
        int64_t* rbx_1 = *(*var_c0[0] + sx.q(var_78[1]:4.d) * 0x10)
        *(rbx_1[4] + 0x10) = 0
        
        if ((*(rbx_1 + 0xa) & 1) != 0 && *(rbx_1 + 0xb) == 1)
            void* rcx_13 = rbx_1[4]
            int32_t rax_27 = data_143de5458.d
            int64_t* var_c8 = nullptr
            *(rcx_13 + 4) = rax_27
            *(rbx_1[4] + 8) = data_143de5458.d
            zmm1 = *arg2
            
            if (0f f!= *(rbx_1 + 0xc))
                void* rax_30 = arg2[1].q
                
                if ((*(rbx_1 + 0xa) & 1) == 0)
                    zmm0 = *(rax_30 + 0x520)
                else
                    zmm0 = *(rax_30 + 0x524)
                
                void* rax_31 = rbx_1[4]
                zmm2 = *(rax_31 + 0x24)
                
                if (not(zmm2 f< 0f))
                    zmm1 = zmm0
                    zmm1[0].d = zmm1[0].d f- zmm2
                
                *(rax_31 + 0x24) = zmm0[0].d
            else
                *(rbx_1[4] + 0x24) = 0xbf800000
            
            (*(*rbx_1 + 8))(rbx_1, zmm1, zx.q(*(arg2 + 4)), 2, &var_c8)
            int64_t* rcx_16 = var_c8
            
            if (rcx_16 != 0)
                rcx_16[9].d -= 1
                
                if (rcx_16[9].d == 1)
                    sub_140a2f6e0(rcx_16)
            
            if (not(0f f>= *(rbx_1 + 0xc)))
                sub_1418ebff0(arg1 + 8, var_78[1]:4.d)
                int64_t rdi_1 = sx.q(*(arg1 + 0xb8))
                int32_t var_f0_2 = (*(rbx_1 + 0xc))[0].d
                int32_t rax_34 = (rdi_1 + 1).d
                char var_ec_2 = 0
                *(arg1 + 0xb8) = rax_34
                
                if (rax_34 s> *(arg1 + 0xbc))
                    sub_1405a4f90(arg1 + 0xb0)
                
                *(*(arg1 + 0xb0) + rdi_1 * 0x10) = rbx_1.o
        
        var_78[1].d &= not.d(var_c0[1]:4.d)
        sub_14059bdd0(&var_c0[1])
    while (var_78[1]:4.d s< *(var_78[0] i+ 0x18))

return sub_1423c8d00(arg1) __tailcall
