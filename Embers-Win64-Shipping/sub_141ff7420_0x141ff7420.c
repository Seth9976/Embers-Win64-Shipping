// 函数: sub_141ff7420
// 地址: 0x141ff7420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x1d8))(arg1, &data_1439a9418)
int32_t rax_1
int512_t zmm1
rax_1, zmm1 = sub_140b4e7c0(arg1, &data_1439a9418)
void* arg_8

if (rax_1 s< 0x1f)
    uint64_t var_38 = 0
    int64_t var_30_1 = 0
    sub_140a1d9d0(arg1, &var_38, zmm1)
    int16_t* r14_1 = &data_142d40450
    
    if (arg1[8].d s< 0x202)
        int16_t* const rcx_3 = &data_142d40450
        
        if (var_30_1.d != 0)
            rcx_3 = var_38
        
        if (sub_140a54510(rcx_3, u"asset") != 0)
            uint64_t rcx_8 = &data_142d40450
            
            if (var_30_1.d != 0)
                rcx_8 = var_38
            
            if (sub_140a54510(rcx_8, u"assetclass") == 0 && var_38 != u"softclass")
                int32_t rcx_9 = var_30_1:4.d
                int32_t rdx_5 = 0
                var_30_1.d = 0
                
                if (rcx_9 != 0xa)
                    sub_1405947f0(&var_38, 0xa)
                    rcx_9 = var_30_1:4.d
                    rdx_5 = var_30_1.d
                
                var_30_1.d = rdx_5 + 0xa
                
                if (rdx_5 + 0xa s> rcx_9)
                    sub_140594770(&var_38)
                
                __builtin_memcpy(var_38, u"softclass", 0x14)
        else if (var_38 != u"softobject")
            int32_t rcx_4 = var_30_1:4.d
            int32_t rdx_4 = 0
            var_30_1.d = 0
            
            if (rcx_4 != 0xb)
                sub_1405947f0(&var_38, 0xb)
                rcx_4 = var_30_1:4.d
                rdx_4 = var_30_1.d
            
            var_30_1.d = rdx_4 + 0xb
            
            if (rdx_4 + 0xb s> rcx_4)
                sub_140594770(&var_38)
            
            __builtin_wcscpy(var_38, u"softobject")
    
    int16_t* rdx_6 = &data_142d40450
    
    if (var_30_1.d != 0)
        rdx_6 = var_38
    
    int512_t zmm1_1 = sub_140b58260(&arg_8, rdx_6, 1)
    *arg2 = arg_8
    uint64_t var_28 = 0
    int32_t var_20_1 = 0
    sub_140a1d9d0(arg1, &var_28, zmm1_1)
    
    if (var_20_1 != 0)
        r14_1 = var_28
    
    sub_140b58260(&arg_8, r14_1, 1)
    uint64_t rcx_16 = var_28
    arg2[1] = arg_8
    
    if (rcx_16 != 0)
        sub_140a74f90(rcx_16)
    
    uint64_t rcx_17 = var_38
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)
else
    (*(*arg1 + 0x140))(arg1, arg2)
    (*(*arg1 + 0x140))(arg1, &arg2[1])

char rax_10 = *(arg1 + 0x2a)

if ((rax_10 & 0x20) == 0 || (rax_10 & 0x40) != 0 || arg1[5].b s< 0)
    arg_8 = sub_140d3c740(&arg2[2], 1)
    (*(*arg1 + 0x130))(arg1, &arg_8)
    
    if ((arg1[5].b & 1) != 0 || (*(arg1 + 0x2a) & 0x40) != 0)
        sub_140d3a3a0(&arg2[2], arg_8)

int64_t* rcx_21 = arg1[1]
int32_t* rdx_11 = *rcx_21

if (&rdx_11[1] u> rcx_21[1])
    int32_t rax_15
    rax_15.b = arg2[3].b != 0
    arg_8.d = rax_15
    (*(*arg1 + 0x150))(arg1, &arg_8, 4)
    arg2[3].b = arg_8.d != 0
else
    void* rax_13
    rax_13.b = *rdx_11 != 0
    arg2[3].b = rax_13.b
    int64_t* rax_14 = arg1[1]
    *rax_14 += 4

int64_t* rcx_23 = arg1[1]
int32_t* rdx_13 = *rcx_23

if (&rdx_13[1] u> rcx_23[1])
    int32_t rdi
    rdi.b = *(arg2 + 0x19) != 0
    arg_8.d = rdi
    (*(*arg1 + 0x150))(arg1, &arg_8, 4)
    *(arg2 + 0x19) = arg_8.d != 0
    return arg1

void* rax_18
rax_18.b = *rdx_13 != 0
*(arg2 + 0x19) = rax_18.b
int64_t* rax_19 = arg1[1]
*rax_19 += 4
return arg1
