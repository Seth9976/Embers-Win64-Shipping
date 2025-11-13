// 函数: sub_14219e720
// 地址: 0x14219e720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = **(arg1 + 0x40)
*(*(r15 + 0x50) + 0x2a) = 1
void* rbx = *(*(r15 + 0x50) + 0x60)

if (rbx != 0)
    void* rax_3 = sub_1424a01d0()
    void* rdx_1 = *(rbx + 0x10)
    int64_t rax_4 = sx.q(*(rax_3 + 0x38))
    
    if (rax_4.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_4 << 3)) == rax_3 + 0x30)
        *(rbx + 0x38) = 0x41a00000

void* rbx_1 = *(arg1 + 0x20)
sub_140d19010(rbx_1, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int32_t i_1 = 0
int64_t arg_8 = 0
void* rax_7 = sub_140d2dfc0(sub_142554d60(), rbx_1, 0, 0, 0, 0, 0, 0, 0)
void* rbx_2 = *(rax_7 + 0x58)

if (rbx_2 != 0)
    void* rax_8 = sub_14249ed50()
    void* rdx_3 = *(rbx_2 + 0x10)
    int64_t rcx_3 = sx.q(*(rax_8 + 0x38))
    
    if (rcx_3.d s<= *(rdx_3 + 0x38) && *(*(rdx_3 + 0x30) + (rcx_3 << 3)) == rax_8 + 0x30)
        *(rbx_2 + 0x30) |= 2
        *(rbx_2 + 0x38) = 0x3f800000
        *(rbx_2 + 0x3c) = 0x3f800000

*(rax_7 + 0x2a) = 1
int64_t rbx_3 = sx.q(*(r15 + 0x40))
int32_t rax_10 = (rbx_3 + 1).d
*(r15 + 0x40) = rax_10

if (rax_10 s> *(r15 + 0x44))
    sub_1405a4d70(r15 + 0x38)

*(*(r15 + 0x38) + (rbx_3 << 3)) = rax_7
void* rbx_4 = *(arg1 + 0x20)
sub_140d19010(rbx_4, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
arg_8 = 0
void* rax_12 = sub_140d2dfc0(sub_142557d90(), rbx_4, 0, 0, 0, 0, 0, 0, 0)
void* rbx_5 = *(rax_12 + 0x70)

if (rbx_5 != 0)
    void* rax_13 = sub_14249f580()
    void* rdx_6 = *(rbx_5 + 0x10)
    int64_t rcx_8 = sx.q(*(rax_13 + 0x38))
    
    if (rcx_8.d s<= *(rdx_6 + 0x38) && *(*(rdx_6 + 0x30) + (rcx_8 << 3)) == rax_13 + 0x30)
        *(rbx_5 + 0x30) |= 2
        *(rbx_5 + 0x44) = _mm_unpacklo_ps(0x41c80000, 0x41c80000)
        int32_t var_40_1 = 0x41c80000
        int64_t temp0_2 = _mm_unpacklo_ps(0x41c80000, 0x41c80000)
        *(rbx_5 + 0x4c) = 0x41c80000
        int32_t var_40_2 = 0x41c80000
        *(rbx_5 + 0x38) = temp0_2
        *(rbx_5 + 0x40) = 0x41c80000

*(rax_12 + 0x2a) = 1
int64_t rbx_6 = sx.q(*(r15 + 0x40))
int32_t rax_15 = (rbx_6 + 1).d
*(r15 + 0x40) = rax_15

if (rax_15 s> *(r15 + 0x44))
    sub_1405a4d70(r15 + 0x38)

*(*(r15 + 0x38) + (rbx_6 << 3)) = rax_12
void* rbx_7 = *(arg1 + 0x20)
sub_140d19010(rbx_7, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
arg_8 = 0
void* rax_17 = sub_140d2dfc0(sub_14255a380(), rbx_7, 0, 0, 0, 0, 0, 0, 0)
void* rbx_8 = *(rax_17 + 0x78)

if (rbx_8 != 0)
    void* rax_18 = sub_14249f580()
    void* rdx_9 = *(rbx_8 + 0x10)
    int64_t rcx_13 = sx.q(*(rax_18 + 0x38))
    
    if (rcx_13.d s<= *(rdx_9 + 0x38) && *(*(rdx_9 + 0x30) + (rcx_13 << 3)) == rax_18 + 0x30)
        *(rbx_8 + 0x30) |= 2
        *(rbx_8 + 0x44) = _mm_unpacklo_ps(0xc1200000, 0xc1200000)
        int32_t var_40_3 = 0x42480000
        int64_t temp0_4 = _mm_unpacklo_ps(0x41200000, 0x41200000)
        int32_t var_40_4 = 0x42c80000
        *(rbx_8 + 0x4c) = 0x42480000
        *(rbx_8 + 0x38) = temp0_4
        *(rbx_8 + 0x40) = 0x42c80000

*(rax_17 + 0x2a) = 1
int64_t rbx_9 = sx.q(*(r15 + 0x40))
int32_t rax_20 = (rbx_9 + 1).d
*(r15 + 0x40) = rax_20

if (rax_20 s> *(r15 + 0x44))
    sub_1405a4d70(r15 + 0x38)

*(*(r15 + 0x38) + (rbx_9 << 3)) = rax_17
void* rbx_10 = *(arg1 + 0x20)
sub_140d19010(rbx_10, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
arg_8 = 0
void* rax_22
int512_t zmm3
rax_22, zmm3 = sub_140d2dfc0(sub_142551cb0(), rbx_10, 0, 0, 0, 0, 0, 0, 0)
void* r13 = *(rax_22 + 0x70)

if (r13 != 0)
    void* rax_23 = sub_14249f2e0()
    void* rdx_12 = *(r13 + 0x10)
    int64_t rcx_18 = sx.q(*(rax_23 + 0x38))
    
    if (rcx_18.d s<= *(rdx_12 + 0x38) && *(*(rdx_12 + 0x30) + (rcx_18 << 3)) == rax_23 + 0x30)
        for (int32_t i = 0; i s< 2; i += 1)
            int32_t rax_26 = (*(*(r13 + 0x28) + 0x58))(r13 + 0x28, _mm_cvtepi32_ps(zx.o(i)))
            
            for (int32_t j = 0; j s< 3; j += 1)
                zmm3.o = 0x3f800000
                (*(*(r13 + 0x28) + 0x70))(r13 + 0x28, zx.q(j), zx.q(rax_26), zmm3)
        
        *(r13 + 0x30) |= 2

sub_140d19010(rax_22, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
arg_8 = 0
void* rax_28
int512_t zmm3_1
int128_t zmm6
rax_28, zmm3_1, zmm6 = sub_140d2dfc0(sub_1424a03a0(), rax_22, 0, 0, 0, 0, 0, 0, 0)
*(rax_22 + 0xa0) = rax_28

if (rax_28 != 0)
    void* rax_29 = sub_1424a03a0()
    void* rdx_15 = *(rax_28 + 0x10)
    int64_t rax_30 = sx.q(*(rax_29 + 0x38))
    
    if (rax_30.d s<= *(rdx_15 + 0x38) && *(*(rdx_15 + 0x30) + (rax_30 << 3)) == rax_29 + 0x30)
        do
            (*(*(rax_28 + 0x28) + 0x58))(rax_28 + 0x28, _mm_cvtepi32_ps(zx.o(i_1)))
            
            if (i_1 != 0)
                zmm3_1.o = zx.o(0)
            else
                zmm3_1.o = zmm6
            
            (*(*(rax_28 + 0x28) + 0x70))()
            i_1 += 1
        while (i_1 s< 2)
        
        *(rax_28 + 0x30) |= 2

*(rax_22 + 0x2a) = 1
int64_t rbx_11 = sx.q(*(r15 + 0x40))
int32_t rax_33 = (rbx_11 + 1).d
*(r15 + 0x40) = rax_33

if (rax_33 s> *(r15 + 0x44))
    sub_1405a4d70(r15 + 0x38)

int64_t result = *(r15 + 0x38)
*(result + (rbx_11 << 3)) = rax_22
return result
