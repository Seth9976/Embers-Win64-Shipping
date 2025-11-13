// 函数: sub_140ca3250
// 地址: 0x140ca3250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228

if ((arg2[5].b & 1) != 0 || (*(arg2 + 0x2a) & 0x40) != 0)
    sub_140d3ffc0(arg1)

int512_t zmm1 = sub_140ca4120(arg1, arg2)

if ((arg2[5].b & 1) != 0 || (*(arg2 + 0x2a) & 0x40) != 0)
    zmm1 = sub_140d3d660(arg1)

*(arg2 + 0x29) |= 4
int512_t zmm1_1 = sub_140bd7280(arg2, &arg1[0x26], zmm1)
int64_t r15 = 0

if ((arg2[5].b & 1) != 0)
    int64_t rcx_3 = arg1[0x2e]
    
    if (rcx_3 != 0)
        arg1[0x2e] = sub_140a84c80(rcx_3, 0, 0)
    
    arg1[0x2f].d = 0
    zmm1_1 = sub_1405b6730(&arg1[0x26], arg1[0x27].d - *(arg1 + 0x164), 0)

char rax_3 = arg2[5].b
uint32_t var_1f0
void* rdx_5

if ((rax_3 & 2) == 0)
    int64_t* rdx_6 = arg2[1]
    int32_t* rcx_6 = *rdx_6
    
    if ((rax_3 & 1) == 0)
        if (&rcx_6[1] u> rdx_6[1])
            rdx_5 = arg1 + 0xcc
            goto label_140ca33b1
        
        *(arg1 + 0xcc) = *rcx_6
        int64_t* rax_13 = arg2[1]
        *rax_13 += 4
    else if (&rcx_6[1] u<= rdx_6[1])
        *(arg1 + 0xcc) = *rcx_6
        int64_t* rax_10 = arg2[1]
        *rax_10 += 4
        *(arg1 + 0xcc) &= 0xefbfff7f
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, arg1 + 0xcc, zmm1_1)
        *(arg1 + 0xcc) &= 0xefbfff7f
    else
        (*(*arg2 + 0x150))(arg2, arg1 + 0xcc, 4)
        *(arg1 + 0xcc) &= 0xefbfff7f
else
    int64_t* rcx_5 = arg2[1]
    var_1f0 = *(arg1 + 0xcc) & 0xefbfff7f
    int32_t* rdx_4 = *rcx_5
    
    if (&rdx_4[1] u> rcx_5[1])
        rdx_5 = &var_1f0
    label_140ca33b1:
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_5, zmm1_1)
        else
            (*(*arg2 + 0x150))(arg2, rdx_5, 4)
    else
        var_1f0 = *rdx_4
        *rcx_5 += 4

if (arg2[8].d s< 0x13b)
    int32_t rdx_9 = *(arg1 + 0xcc) ^ 0x200
    *(arg1 + 0xcc) = rdx_9
    
    if (((rdx_9 u>> 9).b & 1) == 0 && ((*(arg1[8] + 0xcc) u>> 9).b & 1) != 0)
        *(arg1 + 0xcc) = rdx_9 | 0x200

(*(*arg2 + 0x130))(arg2, &arg1[0x1b])
(*(*arg2 + 0x140))(arg2, &arg1[0x1d])
bool cond:4 = (arg2[5].b & 1) == 0
int64_t r14 = 0
int32_t var_1f8 = 0

if (not(cond:4))
    arg1[0x3c].d = 0
    
    if (*(arg1 + 0x1e4) != 0)
        sub_1405a5410(&arg1[0x3b], 0)
    
    if (arg2[8].d s< 0x169 && data_143de542d == 0)
        int64_t rax_21 = (*(*arg2 + 0x20))(arg2)
        int64_t* rdx_13 = arg2[1]
        r14 = rax_21
        int32_t* r8_1 = *rdx_13
        
        if (&r8_1[1] u> rdx_13[1])
            int32_t* rdx_14 = &var_1f8
            
            if ((*(arg2 + 0x29) & 0x20) != 0)
                sub_140b54070(arg2, rdx_14, zmm1_1)
            else
                (*(*arg2 + 0x150))(arg2, rdx_14, 4)
        else
            var_1f8 = *r8_1
            *rdx_13 += 4
        
        int64_t r8_2 = *arg2
        (*(r8_2 + 0x178))(arg2, r14 + ((sx.q(var_1f8) * 3 + 1) << 2), r8_2)

if ((*(arg2 + 0x2a) & 4) == 0)
    (*(*arg2 + 0x130))(arg2, &arg1[0x1c])

if ((arg2[5].b & 1) != 0)
    *(arg1 + 0xcc) &= 0xefbfff7f
    
    if ((arg2[6].d & 0x1000) == 0)
        int64_t r8
        r8.b = 1
        (*(*arg1 + 0x278))(arg1, arg2, r8)

if ((arg2[5].b & 1) == 0)
    sub_140bd70d0(arg2, &arg1[0x3b], zmm1_1)
else
    int64_t rax_27 = (*(*arg2 + 0x20))(arg2)
    
    if (arg2[8].d s< 0x169 && data_143de542d == 0)
        int64_t r8_3 = *arg2
        (*(r8_3 + 0x178))(arg2, r14, r8_3)
    
    var_1f0.q = 0
    int32_t var_1e8_1 = 0
    sub_140bd70d0(arg2, &var_1f0, zmm1_1)
    int64_t r14_1 = var_1f0.q
    
    if (arg1[0x3c].d == 0)
        int64_t r12_1 = sx.q(var_1e8_1)
        
        if (r12_1.d s> 0 && &arg1[0x3b] != &var_1f0)
            arg1[0x3c].d = r12_1.d
            sub_1405a4be0(&arg1[0x3b], r12_1.d, *(arg1 + 0x1e4))
            memcpy(arg1[0x3b], r14_1, (r12_1 << 4).d)
    
    if (arg2[8].d s< 0x169 && data_143de542d == 0)
        (*(*arg2 + 0x178))(arg2, rax_27)
    
    if (r14_1 != 0)
        sub_140a74f90(r14_1)

int64_t* rcx_30 = arg2[1]
int64_t rax_30 = *rcx_30 + 4

if (rax_30 u> rcx_30[1])
    int64_t rax_31 = *arg2
    var_1f0 = 0
    (*(rax_31 + 0x150))(arg2, &var_1f0, 4)
else
    *rcx_30 = rax_30

int64_t rax_32 = *arg2
int64_t var_1e0 = 0
int32_t rcx_33 = (*(rax_32 + 0x140))(arg2, &var_1e0)

if (arg2[8].d s>= 0xf1)
    int32_t rcx_36
    
    if ((arg2[5].b & 2) == 0)
        rcx_36 = arg1[0x19].d
    else
        rcx_36 = (sbb.d(rcx_33, rcx_33, arg2[0xe] != 0) & 0x80000000) | (arg1[0x19].d & 0x7fffffff)
        arg1[0x19].d = rcx_36
    
    int64_t* r8_7 = arg2[1]
    int32_t* rdx_26 = *r8_7
    bool cond:8_1
    
    if (&rdx_26[1] u> r8_7[1])
        int64_t rax_38 = *arg2
        var_1f0 = rcx_36 u>> 0x1f
        (*(rax_38 + 0x150))(arg2, &var_1f0, 4)
        cond:8_1 = var_1f0 != 0
    else
        int32_t rcx_38 = *rdx_26
        *r8_7 = &rdx_26[1]
        cond:8_1 = rcx_38 != 0
    
    int32_t rax_39
    rax_39.b = cond:8_1
    
    if ((arg2[5].b & 1) != 0)
        arg1[0x19].d &= 0x7fffffff
        arg1[0x19].d |= rax_39 << 0x1f

*(arg2 + 0x2c) += 1

if ((arg2[5].b & 1) != 0)
    uint64_t rbx_3 = arg1[0x23]
    var_1f0.q = 0
    (*(*arg2 + 0x130))(arg2, &var_1f0)
    
    if (arg1[0x23] == rbx_3)
        arg1[0x23] = var_1f0.q
    
    arg1[0x19].d &= 0x80000000
else if ((*(arg2 + 0x29) & 0x40) != 0)
    uint64_t rcx_42 = arg1[0x23]
    
    if (rcx_42 != 0 && ((arg2[6].d & 0x401000) == 0 || rcx_42 != 0))
        (*(*rcx_42 + 0xa0))(rcx_42, arg2)
else
    (*(*arg2 + 0x130))(arg2, &arg1[0x23])

uint64_t result = zx.q(arg2[5].b)

if ((result.b & 1) == 0 && (result.b & 2) == 0)
    result = (*(*arg1 + 0x148))(arg1)
    
    if (result != 0)
        void** var_1d8
        int64_t* rbx_4 = *SymBuffer::end(sub_140b4cb20(&var_1d8, arg2), &var_1f0)
        
        if (arg1[0x25] != 0)
            void* r13_2 = *(*rbx_4 + 8)
            sub_140bdef80(arg1)
            char rax_49 = *(r13_2 + 0x28)
            
            if ((rax_49 & 3) != 0 && (rax_49 & 0x10) == 0)
                int64_t rax_51 = (*(*arg1 + 0x380))(arg1)
                sub_140ca6840(arg1[0x25], rbx_4, arg1[0x24], rax_51)
            else if (*(r13_2 + 0x30) == 0)
                int64_t* rcx_51 = arg1[0x25]
                (*(*rcx_51 + 0x280))(rcx_51, rbx_4, arg1[0x24])
            else
                int64_t* rcx_49 = arg1[8]
                
                if (rcx_49 != 0)
                    r15 = (*(*rcx_49 + 0x148))(rcx_49)
                
                int64_t* rcx_50 = arg1[0x25]
                sub_140ca4a60(rcx_50, rbx_4, arg1[0x24], rcx_50, r15)
        
        result = sub_140b4cbb0(&var_1d8)

*(arg2 + 0x2c) -= 1

if ((arg2[5].b & 1) != 0 && arg1[0x23] == 0)
    if (data_143de5452 != 0)
        (*(*arg1 + 0x390))(arg1)
        result = arg1[0x23]
        arg1[0x23] = result
    else if ((arg2[6].d & 0x401000) == 0)
        (*(*arg1 + 0x390))(arg1)
        arg1[0x23] = arg1[0x23]
        result = (*(*arg2 + 0x148))(arg2)

__security_check_cookie(rax_1 ^ &var_228)
return result
