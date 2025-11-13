// 函数: sub_1418641b0
// 地址: 0x1418641b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = arg2
*arg1 = &data_142fe7b88
arg1[2].b = *arg3
void*** rax_1 = j_sub_140a82f30(0x2b8)
void*** rbx

if (rax_1 == 0)
    rbx = nullptr
else
    rbx = sub_14181e1b0(rax_1)

void*** rax_3 = j_sub_140a82f30(0x18)

if (rax_3 == 0)
    rax_3 = nullptr
else
    rax_3[1].d = 1
    *rax_3 = &data_142d42ea8
    *(rax_3 + 0xc) = 1
    rax_3[2] = rbx

arg1[3] = rbx
arg1[4] = rax_3
arg1[5] = 0
arg1[6] = 0
void* rdx_1 = &arg1[7]
*(rdx_1 + 0x1c) = 0x80
void* rax_4 = *(rdx_1 + 0x10)

if (rax_4 != 0)
    rdx_1 = rax_4

__builtin_memset(rdx_1, 0, 0x1c)
arg1[0xb].d = 0xffffffff
*(arg1 + 0x5c) = 0
arg1[0xd] = 0
arg1[0xe].d = 0
sub_141868f40(&arg1[5], &arg4[0x46])
pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&arg1[0xf])
arg1[0x11] = 0
void* rcx_4 = &arg1[0x13]
arg1[0x12] = 0
*(rcx_4 + 0x10) = 0
*(rcx_4 + 0x18) = 0
*(rcx_4 + 0x1c) = 0x80
void* rax_5 = *(rcx_4 + 0x10)

if (rax_5 != 0)
    rcx_4 = rax_5

*rcx_4 = 0
*(rcx_4 + 8) = 0
arg1[0x17].d = 0xffffffff
*(arg1 + 0xbc) = 0
arg1[0x19] = 0
arg1[0x1a].d = 0
arg1[0x1b].b = 0
arg1[3][1].d = *arg4
*(arg1[3] + 0xc) = 0
arg1[3][2].d = arg4[1]
sub_140597df0(&arg1[3][3], &arg4[2])
sub_140597df0(&arg1[3][5], &arg4[6])
sub_140597df0(&arg1[3][7], &arg4[0xa])
sub_140597df0(&arg1[3][9], &arg4[0xe])
sub_1418235f0(&arg1[3][0xb], &arg4[0x12])
sub_140597df0(&arg1[3][0x15], &arg4[0x26])
sub_140597df0(&arg1[3][0x17], &arg4[0x2a])
sub_140597df0(&arg1[3][0x19], &arg4[0x2e])
int32_t var_32c = 1
int32_t r11 = arg4[0x3c]
void* var_328 = &arg4[0x36]
int32_t rcx_23 = 0
int32_t var_330 = 0
int32_t r8_1 = 0
int32_t var_320 = 0xffffffff
int64_t var_31c = 0

if (r11 != 0)
    void* rax_9 = *(arg4 + 0xe8)
    void* r9 = &arg4[0x36]
    
    if (rax_9 != 0)
        r9 = rax_9
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r11 - 1)
    int32_t rdx_13 = *r9
    
    if (rdx_13 != 0)
    label_14186444b:
        int32_t rax_16 = neg.d(rdx_13) & rdx_13
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_16)
        int32_t var_32c_1 = rax_16
        int32_t arg_10 = temp0_1
        int32_t rax_17
        
        if (rax_16 == 0)
            rax_17 = 0x20
        else
            rax_17 = 0x1f - temp0_1
        
        var_31c.d = r8_1 - rax_17 + 0x1f
        
        if (r8_1 - rax_17 + 0x1f s> r11)
            var_31c.d = r11
    else
        while (true)
            int64_t rdx_14 = sx.q(rcx_23)
            r8_1 += 0x20
            rcx_23 += 1
            var_31c:4.d = r8_1
            var_330 = rcx_23
            
            if (rdx_14.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_13 = *(r9 + (rdx_14 << 2) + 4)
            int32_t var_320_1 = 0xffffffff
            
            if (rdx_13 != 0)
                goto label_14186444b
        
        var_31c.d = r11

int32_t rdx_15 = arg4[0x3c]
int128_t var_2f8 = var_330.o
int32_t r8_4 = rdx_15 s>> 5
int32_t r14 = 0xffffffff << (rdx_15.b & 0x1f)
int32_t r9_2 = rdx_15 & 0xffffffe0
void* var_300
var_300.d = r8_4
int128_t var_2e8 = 0xffffffff
int64_t var_2a8 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int512_t zmm1
zmm1.o = var_2f8
var_2f8:8.d = r14
var_2f8:0xc.d = rdx_15
var_2e8.d = r9_2
int128_t var_2c8 = (&arg4[0x32]).o
int128_t var_2b8 = zmm1.o

if (rdx_15 != r11)
    void* rax_19 = *(arg4 + 0xe8)
    void* r10_1 = &arg4[0x36]
    
    if (rax_19 != 0)
        r10_1 = rax_19
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(r11 - 1)
    int32_t rdx_19 = *(r10_1 + (sx.q(r8_4) << 2)) & r14
    
    if (rdx_19 != 0)
    label_14186453e:
        int32_t rax_26 = neg.d(rdx_19) & rdx_19
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_26)
        int32_t arg_18 = temp0_3
        int32_t rbx_1
        
        if (rax_26 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_3
        
        var_2f8:0xc.d = r9_2 - rbx_1 + 0x1f
        
        if (r9_2 - rbx_1 + 0x1f s> r11)
            var_2f8:0xc.d = r11
    else
        while (true)
            int64_t rcx_28 = sx.q(r8_4)
            r9_2 += 0x20
            r8_4 += 1
            var_2e8.d = r9_2
            var_300.d = r8_4
            
            if (rcx_28.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                break
            
            rdx_19 = *(r10_1 + (rcx_28 << 2) + 4)
            var_2f8:8.d = 0xffffffff
            
            if (rdx_19 != 0)
                goto label_14186453e
        
        var_2f8:0xc.d = r11

uint128_t zmm6
uint128_t var_58 = zmm6

while (true)
    int64_t rax_28 = sx.q(var_2b8:0xc.d)
    int64_t rcx_30 = var_2c8.q
    
    if (rax_28.d == (var_2f8:8.q u>> 0x20).d && var_2b8.q == &arg4[0x36] && rcx_30 == &arg4[0x32])
        return arg1
    
    void* rdi_3 = rax_28 * 0x30 + *rcx_30
    int32_t rcx_31 = *(rdi_3 + 0x10)
    int64_t* rbx_5
    
    if (((rcx_31 - 8) & 0xfffffffd) == 0)
        void** const var_1b8
        memset(&var_1b8, 0, 0x90)
        sub_140b4c2a0(&var_1b8)
        int64_t var_128_1 = 0
        void* var_120_1 = rdi_3 + 0x18
        var_1b8 = &data_142d6b230
        int64_t var_118_1 = 0x7fffffffffffffff
        sub_140b55290(&var_1b8, 1)
        var_1b8[0x1b](&var_1b8, 1)
        int64_t* var_1b0
        int64_t* rdx_28 = *var_1b0
        int64_t var_338
        
        if (&rdx_28[1] u> var_1b0[1])
            int64_t* rdx_29 = &var_338
            void** const* rcx_55 = &var_1b8
            char var_18f
            
            if ((var_18f & 0x20) != 0)
                sub_140b540d0(rcx_55, rdx_29, zmm1)
            else
                var_1b8[0x2a](rcx_55, rdx_29, 8)
        else
            var_338 = *rdx_28
            *var_1b0 += 8
        
        zmm6 = zx.o(var_338)
        zmm1 = sub_140b4cb40(&var_1b8)
        void*** rcx_57 = arg1[3]
        uint64_t var_2d0 = zmm6.q
        void var_280
        (*rcx_57)[0x1e](rcx_57, &var_280, rdi_3, &var_2d0)
        int64_t* var_278
        rbx_5 = var_278
    label_1418648ad:
        
        if (rbx_5 != 0)
            rbx_5[1].d -= 1
            
            if (rbx_5[1].d == 1)
                (**rbx_5)(rbx_5)
                int32_t rax_53 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                
                if (rax_53 == 1)
                    (*(*rbx_5 + 8))(rbx_5, 1)
    else
        if (rcx_31 - 0xc u<= 3 || rcx_31 - 0x1d u<= 3)
            void** const var_268
            memset(&var_268, 0, 0x90)
            sub_140b4c2a0(&var_268)
            int64_t var_1d8_1 = 0
            void* var_1d0_1 = rdi_3 + 0x18
            var_268 = &data_142d6b230
            int64_t var_1c8_1 = 0x7fffffffffffffff
            sub_140b55290(&var_268, 1)
            var_268[0x1b](&var_268, 1)
            int64_t* var_260
            int64_t* rdx_24 = *var_260
            int64_t arg_20
            
            if (&rdx_24[1] u> var_260[1])
                int64_t* rdx_25 = &arg_20
                void** const* rcx_47 = &var_268
                char var_23f
                
                if ((var_23f & 0x20) != 0)
                    sub_140b540d0(rcx_47, rdx_25, zmm1)
                else
                    var_268[0x2a](rcx_47, rdx_25, 8)
            else
                arg_20 = *rdx_24
                *var_260 += 8
            
            int64_t rbx_4 = arg_20
            zmm1 = sub_140b4cb40(&var_268)
            void*** rcx_49 = arg1[3]
            int64_t var_2d8 = rbx_4
            void var_290
            (*rcx_49)[0x1d](rcx_49, &var_290, rdi_3, &var_2d8)
            int64_t* var_288
            rbx_5 = var_288
            goto label_1418648ad
        
        if (rcx_31 == 0x18)
            void*** rbx_2 = arg1[3]
            uint64_t var_310 = 0
            int64_t var_308_1 = 0
            void** const var_108
            memset(&var_108, 0, zx.q(rcx_31 + 0x78))
            sub_140b4c2a0(&var_108)
            int64_t var_78_1 = 0
            var_108 = &data_142d6b230
            int64_t var_68_1 = 0x7fffffffffffffff
            void* var_70_1 = rdi_3 + 0x18
            sub_140b55290(&var_108, 1)
            var_108[0x1b](&var_108, 1)
            sub_140a1d9d0(&var_108, &var_310, zmm1)
            zmm1 = sub_140b4cb40(&var_108)
            void var_2a0
            (*rbx_2)[0x1f](rbx_2, &var_2a0, rdi_3, &var_310)
            int64_t* var_298
            
            if (var_298 != 0)
                var_298[1].d -= 1
                
                if (var_298[1].d == 1)
                    (**var_298)(var_298)
                    int32_t rax_37 = *(var_298 + 0xc)
                    *(var_298 + 0xc) -= 1
                    
                    if (rax_37 == 1)
                        (*(*var_298 + 8))(var_298, 1)
            
            uint64_t rcx_41 = var_310
            
            if (rcx_41 != 0)
                zmm1 = sub_140a74f90(rcx_41)
    var_2b8:8.d &= not.d(var_2c8:0xc.d)
    sub_14059bdd0(&var_2c8:8)
