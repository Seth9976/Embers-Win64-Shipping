// 函数: sub_142287da0
// 地址: 0x142287da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
arg1[1].b = 0
*arg1 = &data_142d44d70
uint64_t var_e8

if (data_143de5432 == 0)
    void* rcx = data_143e1a338
    
    if (rcx == 0)
        void* rax_2 = sub_140cde0b0()
        sub_140d19010(rax_2, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
        var_e8 = 0
        void* rax_4 = sub_140d2dfc0(sub_140baa6d0(), rax_2, 0, 0, 0, 0, 0, 0, 0)
        data_143e1a338 = rax_4
        int32_t rax_5 = *(rax_4 + 0xc)
        void* const rax_11
        
        if (rax_5 s>= data_143e1d9b4)
            rax_11 = nullptr
        else
            int16_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rax_5)
            uint32_t rdx_2 = zx.d(temp0_1)
            int32_t rax_7 = temp1_1 + rdx_2
            rax_11 =
                *(data_143e1d9a0 + (sx.q(rax_7 s>> 0x10) << 3)) + sx.q(zx.d(rax_7.w) - rdx_2) * 0x18
        
        *(rax_11 + 8) |= 0x40000000
        rcx = data_143e1a338
    
    sub_140b9aa70(rcx, arg1)
    arg1[1].b = 1

int32_t rbx_2 = *(arg2 + 0x14)
*arg1 = &data_1433152d8
arg1[4] = 0
arg1[5] = 0
arg1[8].b = (rbx_2 u>> 2).b & 1
arg1[6] = 0
arg1[7] = 0
var_e8 = 0
void* rax_14 = sub_140cde0b0()

if ((sub_140b5b8a0(0, 0) & 1) != 0)
    sub_140d19010(rax_14, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")

void* rax_17 = sub_140d2dfc0(sub_1425be5e0(), rax_14, var_e8, rbx_2 u>> 2 & 8, 0, 0, 0, 0, 0)
arg1[6] = rax_17
*(rax_17 + 0x11a) = ((not.d(*(arg2 + 0x14) u>> 6)).b & 1) | 4
sub_1423efa60(sub_1423d6f90(data_143f5b298, *(arg1[6] + 0x11a)), arg1[6])
int32_t rcx_12 = *(arg2 + 0x14)
int32_t r9_8 = ((((zx.d((rcx_12 u>> 5).b) & 1) << 2 | (zx.d((rcx_12 u>> 4).b) & 1)) << 3
    | (zx.d((rcx_12 u>> 3).b) & 1)) * 2) | (zx.d((rcx_12 u>> 6).b) & 1)
int64_t var_e0 = *(arg2 + 0x18)
var_e8.d = (((r9_8 * 2) | (zx.d((rcx_12 u>> 1).b) & 1)) * 2) | (var_e8.d & 0xfffffe01) | 0x201
var_e8.o = var_e8.o
sub_14243a740(arg1[6], &var_e8)
int64_t var_d8
sub_1423fd810(&var_d8, nullptr)
int64_t rcx_16 = arg2[2].q
int64_t r8_5

if (rcx_16 != 0)
    void* rax_38 = arg1[6]
    
    if (*(rax_38 + 0x11a) == 5)
        *(rax_38 + 0x188) = rcx_16
        void* rax_39 = sub_1423de4f0(data_143f5b298, arg1[6])
        *(rax_39 + 0x218) = arg2[2].q
        *(rax_39 + 0x210) = sub_142029ab0(arg2[2].q)
        arg1[6] = *(rax_39 + 0x278)
        int64_t* rdx_12 = *(rax_39 + 0x268)
        r8_5 = sx.q(*(rax_39 + 0x270))
        int64_t* rax_43 = rdx_12
        void* rcx_19 = &rdx_12[r8_5]
        
        if (rdx_12 != rcx_19)
            while (*rax_43 != &arg1[6])
                rax_43 = &rax_43[1]
                
                if (rax_43 == rcx_19)
                    goto label_1422880a3
        
        if (rdx_12 == rcx_19 || ((rax_43 - rdx_12) s>> 3).d == 0xffffffff)
        label_1422880a3:
            int32_t rax_46 = (r8_5 + 1).d
            *(rax_39 + 0x270) = rax_46
            
            if (rax_46 s> *(rax_39 + 0x274))
                sub_1405a4d70(rax_39 + 0x268)
            
            *(*(rax_39 + 0x268) + (r8_5 << 3)) = &arg1[6]
        
        if (*(arg2 + 0x18) != 0)
            void* rax_48
            rax_48, r8_5 = sub_1424b14e0()
            
            if (rax_48 != 0)
                void* rdx_14 = *(arg2 + 0x18)
                int64_t rax_49 = sx.q(*(rax_48 + 0x38))
                
                if (rax_49.d s<= *(rdx_14 + 0x38)
                        && *(*(rdx_14 + 0x30) + (rax_49 << 3)) == rax_48 + 0x30 && rdx_14 != 0)
                    sub_142444aa0(arg1[6], &var_d8)
                    
                    if (arg1[6][0x25] != 0)
                        sub_1424b25d0()

r8_5.b = 1
sub_14243a0c0(arg1[6], &var_d8, r8_5.b, nullptr)

if ((*(arg2 + 0x14) & 1) != 0)
    var_e8 = 0
    void* rax_52 = sub_140cde0b0()
    
    if ((sub_140b5b8a0(0, 0) & 1) != 0)
        sub_140d19010(rax_52, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
    
    void* rax_55 = sub_140d2dfc0(sub_14249fa30(), rax_52, var_e8, 0x40, 0, 0, 0, 0, 0)
    arg1[2] = rax_55
    *(rax_55 + 0x204) = arg2[1].d
    arg1[2][0x41].d = data_14399f630
    sub_140ade170(arg2, &var_e8)
    int64_t* rdx_19 = arg1[2]
    uint32_t var_68[0x4] = var_e8.o
    uint32_t var_48_1[0x4] = __andps_xmmxud_memxud(data_143f52910, data_143f52920)
    int128_t var_58_1 = zx.o(0)
    sub_14228e010(arg1, rdx_19, &var_68, 0)
    var_e8 = 0
    void* rax_58 = sub_140cde0b0()
    
    if ((sub_140b5b8a0(0, 0) & 1) != 0)
        sub_140d19010(rax_58, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
    
    void* rax_61 = sub_140d2dfc0(sub_14259ad30(), rax_58, var_e8, 0x40, 0, 0, 0, 0, 0)
    arg1[3] = rax_61
    *(rax_61 + 0x23d) = 0
    arg1[3][0x44].b = 1
    *(arg1[3] + 0x204) = *(arg2 + 0xc)
    *(arg1[3] + 0x14f) = 2
    sub_14228e010(arg1, arg1[3], &data_143dbb0c0, 0)
    void* rax_65 = sub_140cde0b0()
    sub_140d19010(rax_65, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")
    var_e8 = 0
    void* rax_67 = sub_140d2dfc0(sub_142531aa0(), rax_65, 0, 0, 0, 0, 0, 0, 0)
    arg1[7] = rax_67
    *(rax_67 + 0x440) &= 0xfffffffe
    sub_14228e010(arg1, arg1[7], &data_143dbb0c0, 0)

int64_t var_80

if (var_80 != 0)
    sub_140a74f90(var_80)

int32_t i_2
int32_t i_1 = i_2
int64_t* var_90
int64_t* rbx_10 = var_90

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_38 = *rbx_10
        
        if (rcx_38 != 0)
            sub_140a74f90(rcx_38)
        
        rbx_10 = &rbx_10[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_10 = var_90

if (rbx_10 != 0)
    sub_140a74f90(rbx_10)

int64_t var_a0

if (var_a0 != 0)
    sub_140a74f90(var_a0)

int64_t var_b0

if (var_b0 != 0)
    sub_140a74f90(var_b0)

int64_t var_c8

if (var_c8 != 0)
    sub_140a74f90(var_c8)

int64_t rcx_43 = var_d8

if (rcx_43 != 0)
    sub_140a74f90(rcx_43)

__security_check_cookie(rax_1 ^ &var_138)
return arg1
