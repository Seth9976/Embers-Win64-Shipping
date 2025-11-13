// 函数: sub_1422dd2a0
// 地址: 0x1422dd2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r12 = 0
int64_t r15 = sx.q(arg2)
int32_t rbx = 0
int32_t arg_8 = 0
arg3[0x10]
*(arg1 + 0xc8)
int32_t r9 = *(arg3 + 0x9c)
uint8_t var_68

if (test_bit(r9, 0x10))
    void* rcx_1 = arg1 + 0x70
    void* var_58_1 = arg1
    void* rax_1 = *(rcx_1 + 0x10)
    int64_t* var_60_1 = arg3
    
    if (rax_1 != 0)
        rcx_1 = rax_1
    
    var_68 = (r9 u>> 0x11).b & 1
    *(arg1 + 0xc8)
    int64_t* r8 = *(rcx_1 + (r15 << 3))
    *r8
    r8[0x2a9].d

int512_t zmm1 = sub_1422ef530(arg3, *(arg1 + 0xc8), *(arg1 + 0xe8))
int32_t i = 0

if (arg3[0xe].d s> 0)
    int64_t rbp_1 = 0
    
    do
        int64_t* rax_2 = arg3[0xd]
        int64_t* rcx_4 = arg3
        
        if (rax_2 != 0)
            rcx_4 = rax_2
        
        void* rax_3 = *(rcx_4 + rbp_1 + 0x10)
        
        if (rax_3 != 0 && *(rax_3 + 0x10) == 0)
            int64_t* rcx_5 = arg3[0x10]
            int64_t var_48
            int16_t* const rax_6
            
            if (rcx_5 == 0)
                rax_6 = u"null"
            else
                rbx |= 1
                int64_t* rax_5 = (*(*rcx_5 + 0x38))(rcx_5, &var_48)
                
                if (rax_5[1].d == 0)
                    rax_6 = &data_142d40450
                else
                    rax_6 = *rax_5
            
            var_68.q = rax_6
            zmm1 = sub_140af98a0("Unknown", 0x110, 
                FMeshElementCollector::AddMesh - On MeshBatchElement %d, Material '%s', index buffer "
            "object has null RHI resour", zx.q(i))
            
            if ((rbx.b & 1) != 0)
                int64_t rcx_6 = var_48
                rbx &= 0xfffffffe
                
                if (rcx_6 != 0)
                    zmm1 = sub_140a74f90(rcx_6)
            
            sub_140afbb40()
        
        i += 1
        rbp_1 += 0x68
    while (i s< arg3[0xe].d)

if (sub_1411a4ac0(data_143f0f1a0, *(arg1 + 0xe8)) != 0 && *(arg3[0xf] + 0xa2) s>= 0)
    int32_t i_1 = 0
    
    if (arg3[0xe].d s> 0)
        int64_t rsi = 0
        
        do
            int64_t* rax_9 = arg3[0xd]
            int64_t* rcx_8 = arg3
            
            if (rax_9 != 0)
                rcx_8 = rax_9
            
            void* r15_1 = *(rcx_8 + rsi + 8)
            
            if (r15_1 != 0)
                void* rcx_9 = arg1 + 0x100
                void* rax_10 = *(rcx_9 + 0x10)
                
                if (rax_10 != 0)
                    rcx_9 = rax_10
                
                int64_t* rbx_1 = *(rcx_9 + (sx.q(arg2) << 3))
                int64_t rbp_2 = sx.q(rbx_1[1].d)
                int32_t rax_11 = (rbp_2 + 1).d
                rbx_1[1].d = rax_11
                
                if (rax_11 s> *(rbx_1 + 0xc))
                    sub_14119ac20(rbx_1)
                
                int64_t* rax_12 = arg3[0xd]
                int64_t* rcx_11 = arg3
                int64_t j_1 = 4
                
                if (rax_12 != 0)
                    rcx_11 = rax_12
                
                *(rcx_11 + rsi + 0x3c) &= 0xfffffff9
                *(rcx_11 + rsi + 0x3c) |= 1
                int64_t* rcx_12 = arg3
                int64_t* rax_13 = arg3[0xd]
                
                if (rax_13 != 0)
                    rcx_12 = rax_13
                
                *(rcx_12 + rsi + 0x3c) &= 0xf8000007
                *(rcx_12 + rsi + 0x3c) |= (rbp_2.d & 0xffffff) << 3
                int128_t* rcx_13 = *(r15_1 + 0x20)
                int128_t* rax_18 = rbp_2 * 0x230 + *rbx_1
                int64_t j
                
                do
                    rax_18 = &rax_18[8]
                    int128_t zmm0_1 = *rcx_13
                    rcx_13 = &rcx_13[8]
                    rax_18[-8] = zmm0_1
                    zmm1.o = rcx_13[-7]
                    rax_18[-7] = zmm1.o
                    rax_18[-6] = rcx_13[-6]
                    zmm1.o = rcx_13[-5]
                    rax_18[-5] = zmm1.o
                    rax_18[-4] = rcx_13[-4]
                    zmm1.o = rcx_13[-3]
                    rax_18[-3] = zmm1.o
                    rax_18[-2] = rcx_13[-2]
                    zmm1.o = rcx_13[-1]
                    rax_18[-1] = zmm1.o
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                *rax_18 = *rcx_13
                zmm1.o = rcx_13[1]
                rax_18[1] = zmm1.o
                rax_18[2] = rcx_13[2]
            
            i_1 += 1
            rsi += 0x68
        while (i_1 s< arg3[0xe].d)
        
        r15 = zx.q(arg2)
        r12 = 0

void* rcx_14 = arg1 + 0x70
int64_t rbx_2 = sx.q(r15.d)
void* rax_19 = *(rcx_14 + 0x10)

if (rax_19 != 0)
    rcx_14 = rax_19

sub_142134ed0(arg3[0x10], *(*(rcx_14 + (rbx_2 << 3)) + 0x1548), zmm1)
void* rdx_8 = arg1 + 0x90
void* rcx_16 = *(rdx_8 + 8)
void* rax_21 = rdx_8

if (rcx_16 != 0)
    rax_21 = rcx_16

void* rcx_17 = arg1 + 0x38
arg3[0x13].w = *(rax_21 + (rbx_2 << 1))
void* rax_23 = *(rdx_8 + 8)

if (rax_23 != 0)
    rdx_8 = rax_23

*(rdx_8 + (rbx_2 << 1)) += 1
void* rax_24 = *(rcx_17 + 8)

if (rax_24 != 0)
    rcx_17 = rax_24

*(rcx_17 + (rbx_2 << 2)) += arg3[0xe].d
void* rcx_18 = arg1 + 0x18
void* rax_26 = *(rcx_18 + 0x10)

if (rax_26 != 0)
    rcx_18 = rax_26

int64_t* rbx_3 = *(rcx_18 + (rbx_2 << 3))
int64_t rsi_1 = sx.q(rbx_3[1].d)
int32_t rax_27 = (rsi_1 + 1).d
rbx_3[1].d = rax_27

if (rax_27 s> *(rbx_3 + 0xc))
    sub_14119a720(rbx_3, rsi_1.d)

void* result = *rbx_3
int64_t** rbx_4 = result + rsi_1 * 0x18

if (rbx_4 != 0)
    uint64_t rdx_10 = zx.q(*(arg1 + 0xe8))
    rbx_4[1] = *(arg1 + 0xc8)
    *rbx_4 = arg3
    int64_t* rcx_21 = arg3[0x10]
    arg_8.q = 0
    int64_t* rax_30 = (*(*rcx_21 + 0x40))(rcx_21, rdx_10, &arg_8)
    int64_t rdx_11 = *rax_30
    int32_t rax_31 = (*(rdx_11 + 0x1d8))(rax_30, rdx_11)
    int32_t rdx_12
    rdx_12.b = rax_31 == 0
    result = rbx_4[1]
    
    if (rax_31 == 1)
        r12 = 2
    
    int32_t rdx_15 = ((rdx_12 | (rbx_4[2].d & 0xfffffffe)) & 0xfffffffd) | r12
    rbx_4[2].d = rdx_15
    rbx_4[2].d = (zx.d(*(result + 0x37)) u>> 5 & 0x7fffffc) | (rdx_15 & 0xfffffffb)

return result
