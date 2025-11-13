// 函数: sub_140d2d830
// 地址: 0x140d2d830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
uint64_t arg_18 = arg3
void* arg_8 = arg1
void* rsi = nullptr
int32_t r14 = arg4
uint32_t r12_1
r12_1.b = (arg4 u>> 4).b & 1
int32_t var_a8 = 0
void* r13 = arg1
int64_t performanceCount

if (r12_1.b != 0)
    int64_t* rax_1
    rax_1, arg4 = sub_140bdd7d0(arg1, &performanceCount)
    r14 &= 0xffffcfff
    arg_20 = r14
    arg3 = *rax_1
    arg_18 = arg3

void* result = nullptr
int32_t rcx
rcx.b = (arg3 u>> 0x20).d == 0
int64_t var_60
uint64_t rbx_1

if ((rcx.b & sub_140b5b8a0(arg3.d, 0)) == 0)
    arg4.b = 1
    int32_t var_b8_1 = 0
    int32_t var_c0_1 = 0
    char var_c8_1 = 0
    void* result_1 = sub_140d3f470(nullptr, arg2, arg_18, arg4.b, 0, 0, 0)
    result = result_1
    
    if (result_1 != 0)
        void* rax_4
        int64_t rcx_3
        
        if (r13 != 0)
            rax_4 = *(result_1 + 0x10)
            rcx_3 = sx.q(*(r13 + 0x38))
        
        if (r13 == 0 || rcx_3.d s> *(rax_4 + 0x38)
                || *(*(rax_4 + 0x30) + (rcx_3 << 3)) != r13 + 0x30)
            rbx_1 = &data_142d40450
            int16_t* const r13_1 = &data_142d40450
            int16_t* var_90
            int16_t* const r14_1
            
            if (((*(arg_8 + 0xcc) u>> 0xa).b & 1) == 0)
            label_140d2d96f:
                
                if (arg2 == 0)
                    r14_1 = &data_142d40450
                else
                    var_90 = nullptr
                    int32_t var_88_1 = 0
                    sub_140d21e40(arg2, 0, &var_90)
                    r14_1 = &data_142d40450
                    var_a8 = 1
                    
                    if (var_88_1 != 0)
                        r14_1 = var_90
            else
                if (arg2 != 0)
                    void* i = *(arg2 + 0x20)
                    void* i_2 = arg2
                    
                    for (; i != 0; i = *(i + 0x20))
                        i_2 = i
                    
                    r13_1 = PerObjectConfig object using the transient package, has triggered a name "
                    "conflict and will now crash.\nTo avoid this, don't use "
                    
                    if (i_2 != sub_140cde0b0())
                        r13_1 = &data_142d40450
                    
                    goto label_140d2d96f
                
                r14_1 = &data_142d40450
            
            int64_t* rax_10 = sub_140d21830(result, &var_60, 0, 0)
            int16_t* const r12_2
            
            if (rax_10[1].d == 0)
                r12_2 = &data_142d40450
            else
                r12_2 = *rax_10
            
            int64_t var_70
            int64_t* rax_11 = sub_140b63b70(&arg_18, &var_70)
            int16_t* const r15_1
            
            if (rax_11[1].d == 0)
                r15_1 = &data_142d40450
            else
                r15_1 = *rax_11
            
            performanceCount = *(arg_8 + 0x18)
            uint64_t var_80
            sub_140b63b70(&performanceCount, &var_80)
            int16_t* const var_b0_1 = r12_2
            int32_t var_78
            
            if (var_78 != 0)
                rbx_1 = var_80
            
            var_b8_1.q = r15_1
            var_c0_1.q = r14_1
            var_c8_1.q = rbx_1
            sub_140af98a0("Unknown", 0x91f, 
                %sObjects have the same fully qualified name but different paths.\n\tNew Object: %s %s."
            "\n\tExisting Object: %s", r13_1)
            uint64_t rcx_8 = var_80
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
            
            int64_t rcx_9 = var_70
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
            
            int64_t rcx_10 = var_60
            
            if (rcx_10 != 0)
                sub_140a74f90(rcx_10)
            
            if ((var_a8.b & 1) != 0)
                int16_t* rcx_11 = var_90
                
                if (rcx_11 != 0)
                    sub_140a74f90(rcx_11)
            
            sub_140afbb40()
            r14 = arg_20
            r13 = arg_8
else
    arg_8 = nullptr
    arg_18 = *sub_140d25240(&arg_8, arg2, r13, 0)

int64_t r10 = sx.q(*(r13 + 0x58))
char r9 = 0
rbx_1.b = 0
arg_8.d = 0xffffffff
arg_20.b = 0
var_a8.q = 0
int32_t r15_2

if (result == 0)
    char r8_3 = data_14399fa4c
    int64_t rdi = data_143e1d668
    int64_t rax_14
    
    if (r8_3 == 0
            || ((rdi + 0xf) & 0xfffffffffffffff0) + r10 u> sx.q(data_143e1d658) + data_143e1d660)
        rax_14.b = 0
    else
        rax_14.b = 1
    
    if (r8_3 == 0)
        if (rax_14.b == 0)
            goto label_140d2db0c
        
    label_140d2db23:
        result = (rdi + 0xf) & 0xfffffffffffffff0
        void* rcx_20 = result + r10
        bool cond:4_1 = data_143e1d670 u>= rcx_20
        data_143e1d668 = rcx_20
        
        if (cond:4_1)
            r15_2 = arg5
        else
            r15_2 = arg5
            data_143e1d670 = rcx_20
    else
        if (rax_14.b != 0)
            goto label_140d2db23
        
        data_143e1d670 = ((data_143e1d670 + 0xf) & 0xfffffffffffffff0) + r10
    label_140d2db0c:
        result = sub_140a82f30(sx.q((r10 + 0xf).d & 0xfffffff0), 0)
        r9 = 0
        r15_2 = arg5
    
    goto label_140d2dc57

data_143e1d988 = (*(*result + 0x170))(result)
var_a8.q = sub_140d3cb50(result)
int32_t rax_20 = sub_140d3cbe0(result)
int32_t r8_4 = *(result + 0xc)
arg_8.d = rax_20
void* const rax_28

if (r8_4 s>= data_143e1d9b4)
    rax_28 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r8_4)
    uint32_t rdx_9 = zx.d(temp0_1)
    int32_t rax_23 = temp1_1 + rdx_9
    rax_28 = *(data_143e1d9a0 + (sx.q(rax_23 s>> 0x10) << 3)) + sx.q(zx.d(rax_23.w) - rdx_9) * 0x18

r15_2 = arg5 | (*(rax_28 + 8) & 0x42000000)

if (r12_1.b != 0)
    *(result + 8) |= r14
    
    if (r8_4 s>= data_143e1d9b4)
        *8 |= r15_2
        *(result + 8) &= 0xffffcfff
    else
        int16_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r8_4)
        uint32_t rdx_12 = zx.d(temp2_1)
        int32_t rax_31 = temp3_1 + rdx_12
        int64_t rdx_13 = sx.q(zx.d(rax_31.w) - rdx_12) * 3
        int64_t rcx_33 = *(data_143e1d9a0 + (sx.q(rax_31 s>> 0x10) << 3))
        *(rcx_33 + (rdx_13 << 3) + 8) |= r15_2
        *(result + 8) &= 0xffffcfff
    
    goto label_140d2dc50

if (arg6 == 0)
label_140d2dc69:
    
    if ((*(result + 0xa) & 1) == 0)
        int512_t zmm0_1 = sub_140d21830(result, &var_60, 0, 0)
        sub_140cd8580(result, zmm0_1)
        rbx_1.b = 0
        
        if ((*(*result + 0x88))(result) == 0)
            char i_1
            
            do
                if (rbx_1.b == 0 && data_143de5423 == 0)
                    QueryPerformanceCounter(&performanceCount)
                    rbx_1.b = 1
                
                zmm0_1.o = zx.o(0)
                zmm0_1 = sub_140b73230(zmm0_1.o)
                i_1 = (*(*result + 0x88))(result)
            while (i_1 == 0)
            
            if (rbx_1.b != 0)
                QueryPerformanceCounter(&performanceCount)
        
        sub_140cd85b0(result, zmm0_1)
        int64_t rcx_42 = var_60
        
        if (rcx_42 != 0)
            sub_140a74f90(rcx_42)
    
    (**result)(result, 0)
    r9 = 0
    rbx_1.b = 1
label_140d2dd0e:
    
    if (((*(r13 + 0xcc) u>> 3).b & 1) != 0 && ((r14 u>> 5).b & 1) == 0)
        r14 |= 0x40
else
    void* rax_37 = *(result + 0x20)
    
    if (rax_37 == 0)
        goto label_140d2dc69
    
    if (((*(rax_37 + 8) u>> 4).b & 1) != 0)
        goto label_140d2dc50
    
    if (sub_140d209c0(result) == *(*(result + 0x10) + 0x118))
        goto label_140d2dc69
    
    rbx_1.b = 0
label_140d2dc50:
    r9 = 1
    arg_20.b = 1
label_140d2dc57:
    
    if (r12_1.b == 0)
        goto label_140d2dd0e

if (r9 != 0)
    *(result + 8) |= r14
    int32_t rax_51 = *(result + 0xc)
    void* const rax_58
    
    if (rax_51 s>= data_143e1d9b4)
        rax_58 = nullptr
    else
        int16_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(rax_51)
        uint32_t rdx_17 = zx.d(temp4_1)
        int32_t rax_53 = temp5_1 + rdx_17
        rax_58 =
            *(data_143e1d9a0 + (sx.q(rax_53 s>> 0x10) << 3)) + sx.q(zx.d(rax_53.w) - rdx_17) * 0x18
    
    *(rax_58 + 8) |= r15_2
else
    memset(result, 0, sx.q(r10.d))
    uint64_t rdx_15 = arg_18
    *result = &data_142ea3a50
    *(result + 8) = r14 | 0x200
    *(result + 0xc) = 0xffffffff
    *(result + 0x10) = r13
    *(result + 0x18) = 0
    *(result + 0x20) = arg2
    sub_140d177a0(result, rdx_15, r15_2)

if (rbx_1.b != 0)
    int64_t r14_3 = sx.q(arg_8.d)
    void* rbx_2 = var_a8.q
    sub_140d3e8d0(result, rbx_2, r14_3.d, 0)
    
    if (rbx_2 != 0)
        *((r14_3 << 7) + *(rbx_2 + 0x18) + 0x40) = result

char rbx_3

if (data_14399ea98() == 0)
    int32_t rax_61 = *(result + 0xc)
    void* const rax_68
    
    if (rax_61 s>= data_143e1d9b4)
        rax_68 = nullptr
    else
        int16_t temp6_1
        int32_t temp7_1
        temp6_1:temp7_1 = sx.q(rax_61)
        uint32_t rdx_22 = zx.d(temp6_1)
        int32_t rax_63 = temp7_1 + rdx_22
        rax_68 =
            *(data_143e1d9a0 + (sx.q(rax_63 s>> 0x10) << 3)) + sx.q(zx.d(rax_63.w) - rdx_22) * 0x18
    
    *(rax_68 + 8) &= 0xf7ffffff
    int32_t rax_69 = *(result + 0xc)
    int32_t r8_8 = data_143e1d9b4
    int64_t r9_2 = data_143e1d9a0
    void* const rdx_27
    
    if (rax_69 s>= r8_8)
        rdx_27 = nullptr
    else
        int16_t temp8_1
        int32_t temp9_1
        temp8_1:temp9_1 = sx.q(rax_69)
        uint32_t rdx_25 = zx.d(temp8_1)
        int32_t rax_71 = temp9_1 + rdx_25
        rdx_27 = *(r9_2 + (sx.q(rax_71 s>> 0x10) << 3)) + sx.q(zx.d(rax_71.w) - rdx_25) * 0x18
    
    if (((*(rdx_27 + 8) u>> 0x1a).b & 1) != 0)
        if (data_143de5480 == 0)
            goto label_140d2dead
        
        uint32_t rax_78
        rax_78.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_78.b != 0)
            r8_8 = data_143e1d9b4
            r9_2 = data_143e1d9a0
        label_140d2dead:
            int32_t rax_79 = *(result + 0xc)
            
            if (rax_79 s< r8_8)
                int16_t temp10_1
                int32_t temp11_1
                temp10_1:temp11_1 = sx.q(rax_79)
                uint32_t rdx_29 = zx.d(temp10_1)
                int32_t rax_81 = temp11_1 + rdx_29
                rsi = *(r9_2 + (sx.q(rax_81 s>> 0x10) << 3)) + sx.q(zx.d(rax_81.w) - rdx_29) * 0x18
            
            *(rsi + 8) &= 0xfbffffff
    
    rbx_3 = arg_20.b
else
    rbx_3 = arg_20.b
    sub_140bcbbf0(result, zx.q(rbx_3))

if (arg7 != 0)
    *arg7 = rbx_3

return result
