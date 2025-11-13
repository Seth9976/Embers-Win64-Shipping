// 函数: sub_14236eef0
// 地址: 0x14236eef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_298
int64_t rax_1 = __security_cookie ^ &var_298
void** var_250 = arg5
int64_t* r15 = nullptr
int64_t r14 = arg3
void* var_248 = arg2
int64_t var_238 = arg3
int32_t result_1 = arg6[2]
int32_t var_268
int32_t* var_258
int32_t rax_15
int32_t rcx_5
void* rdx_7
int64_t* rdi

if (arg4[0xcd].d == *(arg4 + 0x694))
label_14236efbb:
    rdi = &arg4[0xd6]
    int64_t rbx_1 = sx.q(rdi[1].d)
    int32_t rax_11 = (rbx_1 + 8).d
    rdi[1].d = rax_11
    
    if (rax_11 s> *(rdi + 0xc))
        sub_1405daba0(rdi)
    
    var_268 = rbx_1.d
    *(rbx_1 + *rdi) = 0
    sub_141cf16a0(&arg4[0xcc], &var_238, &var_268)
    int64_t rax_14 = sx.q(var_268)
    r14 = var_238
    int32_t* rdx_6 = rax_14 + *rdi
    var_258 = rdx_6
    rcx_5 = (rax_14 + 4).d
    rax_15 = 1
    *rdx_6 = 1
    rdx_7 = *rdi
else
    void* r8 = arg4[0xd4]
    void* r9 = &arg4[0xd3]
    
    if (r8 != 0)
        r9 = r8
    
    int32_t rax_10 =
        *(r9 + ((sx.q((r14 u>> 0x20).d * 0x17 + r14.d) & (sx.q(arg4[0xd5].d) - 1)) << 2))
    
    if (rax_10 == 0xffffffff)
        goto label_14236efbb
    
    int64_t r8_1 = arg4[0xcc]
    int64_t rdx_2
    
    while (true)
        rdx_2 = sx.q(rax_10)
        int64_t rcx_2 = rdx_2 * 3
        
        if (*(r8_1 + (rcx_2 << 3)) == r14)
            break
        
        rax_10 = *(r8_1 + (rcx_2 << 3) + 0x10)
        
        if (rax_10 == 0xffffffff)
            goto label_14236efbb
    
    if (rax_10 == 0xffffffff)
        goto label_14236efbb
    
    void* rcx_8 = r8_1 + rdx_2 * 0x18
    
    if (rcx_8 == 0 || rcx_8 == -8)
        goto label_14236efbb
    
    int64_t rcx_10 = sx.q(*(rcx_8 + 8))
    rdi = &arg4[0xd6]
    rdx_7 = *rdi
    int32_t* rax_19 = rdx_7 + rcx_10
    rcx_5 = rcx_10.d + 4
    var_258 = rax_19
    rax_15 = *rax_19

int32_t* rbx_3 = sx.q(rcx_5) + rdx_7
var_268 = rax_15
int32_t var_260

if (rax_15 != 0)
    *rbx_3 = 0
    sub_1405ba560(&data_143a2ff40, &var_260, arg1)
    int64_t rax_16 = sx.q(var_260)
    int64_t r15_2
    void* r15_3
    
    if (rax_16.d != 0xffffffff)
        r15_2 = rax_16 << 5
        r15_3 = r15_2 + data_143a2ff40
    
    if (rax_16.d == 0xffffffff || r15_2 == neg.q(data_143a2ff40))
        r15 = nullptr
    else
        r15 = r15_3 + 8
        
        if (r15_3 != -8 && *(arg1 + 0x50) s> 0)
            int32_t i = 0
            
            do
                int64_t i_1 = sx.q(i)
                void* rdx_11 = i_1 * 0x50 + *r15
                
                if (*(rdx_11 + 8) - *(rdx_11 + 0x34) s< *(*(arg1 + 0x48) + (i_1 << 2)))
                    break
                
                i += 1
                *rbx_3 = i
            while (i s< *(arg1 + 0x50))
    
    *var_258 = 0

int64_t rax_21 = sx.q(*rbx_3)
var_260 = rax_21.d

if (rax_21.d s< *(arg1 + 0x30) && *(*(arg1 + 0x28) + (rax_21 << 3)) != 0)
    void var_228
    sub_14234f710(&var_228, var_250)
    sub_141e54560(&var_228, arg1)
    int64_t r8_5 = sx.q(*rbx_3)
    int64_t* rbx_4 = *(*(arg1 + 0x28) + (r8_5 << 3))
    uint64_t rax_22 = sub_142365fb0(r14, rbx_4, r8_5.d)
    (*(*rbx_4 + 0x298))(rbx_4, var_248, rax_22, arg4, &var_228, arg6)
    sub_142351ee0(&var_228)

int32_t* result = arg6
int32_t result_2 = result[2] - result_1
bool cond:0 = var_268 == 0
result_1 = result_2
var_258.d = result_2

if (not(cond:0))
    if (arg4[0xcd].d == *(arg4 + 0x694))
    label_14236f207:
        int64_t r14_1 = sx.q(rdi[1].d)
        int32_t rax_29 = (r14_1 + 8).d
        rdi[1].d = rax_29
        
        if (rax_29 s> *(rdi + 0xc))
            sub_1405daba0(rdi)
        
        var_268 = r14_1.d
        *(r14_1 + *rdi) = 0
        sub_141cf16a0(&arg4[0xcc], &var_238, &var_268)
        result = sx.q(var_268) + *rdi
        *result = 1
    else
        void* r8_7 = arg4[0xd4]
        void* r9_2 = &arg4[0xd3]
        
        if (r8_7 != 0)
            r9_2 = r8_7
        
        int32_t rax_28 =
            *(r9_2 + ((sx.q((r14 u>> 0x20).d * 0x17 + r14.d) & (sx.q(arg4[0xd5].d) - 1)) << 2))
        
        if (rax_28 == 0xffffffff)
            goto label_14236f207
        
        int64_t r8_8 = arg4[0xcc]
        int64_t rdx_18
        
        while (true)
            rdx_18 = sx.q(rax_28)
            int64_t rcx_21 = rdx_18 * 3
            
            if (*(r8_8 + (rcx_21 << 3)) == r14)
                break
            
            rax_28 = *(r8_8 + (rcx_21 << 3) + 0x10)
            
            if (rax_28 == 0xffffffff)
                goto label_14236f207
        
        if (rax_28 == 0xffffffff)
            goto label_14236f207
        
        void* rax_34 = r8_8 + rdx_18 * 0x18
        
        if (rax_34 == 0 || rax_34 == -8)
            goto label_14236f207
        
        result = sx.q(*(rax_34 + 8)) + *rdi
    
    if (result_2 != 0)
        if (r15 == 0)
            var_248 = arg1
            var_250 = &var_248
            sub_14234d690(&data_143a2ff40, &result_1, &var_250, nullptr)
            r15 = data_143a2ff40 + 8 + (sx.q(result_1) << 5)
            sub_142376ce0(r15, *(arg1 + 0x50) + 1, 1)
        
        int64_t rax_37 = sx.q(var_260)
        var_250 = arg4
        result = sub_1418ca3c0(rax_37 * 0x50 + *r15, &var_250, &var_258)
    else
        *result = 1
else if (result_2 s> 0)
    if (r15 == 0)
        var_248 = arg1
        var_250 = &var_248
        sub_14234d690(&data_143a2ff40, &var_258, &var_250, nullptr)
        r15 = data_143a2ff40 + 8 + (sx.q(var_258.d) << 5)
        sub_142376ce0(r15, *(arg1 + 0x50) + 1, 1)
    
    uint32_t rcx_34 = (arg4 u>> 4).d
    int32_t rdx_29 = (0x9e3779b9 - rcx_34) ^ rcx_34 << 8
    int64_t* rbx_8 = sx.q(var_260) * 0x50 + *r15
    int32_t rdi_3 = neg.d(rcx_34 + rdx_29) ^ rdx_29 u>> 0xd
    int32_t rcx_37 = (rcx_34 - rdx_29 - rdi_3) ^ rdi_3 u>> 0xc
    int32_t rdx_32 = (rdx_29 - rcx_37 - rdi_3) ^ rcx_37 << 0x10
    int32_t rdi_6 = (rdi_3 - rdx_32 - rcx_37) ^ rdx_32 u>> 5
    int32_t rcx_40 = (rcx_37 - rdx_32 - rdi_6) ^ rdi_6 u>> 3
    int32_t rdx_35 = (rdx_32 - rcx_40 - rdi_6) ^ rcx_40 << 0xa
    int32_t rdi_9 = (rdi_6 - rdx_35 - rcx_40) ^ rdx_35 u>> 0xf
    void* rcx_43
    
    if (rbx_8[1].d == *(rbx_8 + 0x34))
    label_14236f42d:
        sub_140598750(rbx_8, &var_248)
        char* var_270_2 = nullptr
        int64_t* var_240
        var_240[1].d = 0
        int32_t rax_56 = var_248.d
        *var_240 = arg4
        void* var_278
        var_278.d = rax_56
        var_240[2].d = 0xffffffff
        sub_1408651b0(rbx_8, &var_258, rdi_9, var_240, var_278.d, var_270_2)
        rcx_43 = *rbx_8 + sx.q(var_258.d) * 0x18
    else
        void* rcx_41 = rbx_8[8]
        void* r8_15 = &rbx_8[7]
        
        if (rcx_41 != 0)
            r8_15 = rcx_41
        
        int32_t rax_55 = *(r8_15 + (((sx.q(rbx_8[9].d) - 1) & sx.q(rdi_9)) << 2))
        
        if (rax_55 == 0xffffffff)
            goto label_14236f42d
        
        int64_t r8_16 = *rbx_8
        
        while (true)
            int64_t rdx_40 = sx.q(rax_55) * 3
            rcx_43 = r8_16 + (rdx_40 << 3)
            
            if (*(r8_16 + (rdx_40 << 3)) == arg4)
                break
            
            rax_55 = *(rcx_43 + 0x10)
            
            if (rax_55 == 0xffffffff)
                goto label_14236f42d
        
        if (rax_55 == 0xffffffff || rcx_43 == 0)
            goto label_14236f42d
    
    result = zx.q(result_1)
    *(rcx_43 + 8) = result.d

__security_check_cookie(rax_1 ^ &var_298)
return result
