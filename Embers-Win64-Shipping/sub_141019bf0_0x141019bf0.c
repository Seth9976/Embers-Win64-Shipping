// 函数: sub_141019bf0
// 地址: 0x141019bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t* rax_2 = sub_140a242a0()
int64_t rdx = *rax_2
int32_t rax_3 = (*(rdx + 0x18))(rax_2, rdx)
int32_t r15 = 0
int64_t* r14 = arg1 + 0x6d8
int32_t rbx
rbx.b = data_1439c79e0 != 0

if (rax_3 + 1 s> *(r14 + 0xc))
    sub_1405c5570(r14, rax_3 + 1)

if (rax_3 s> *(arg1 + 0x6f4))
    sub_1405c5570(arg1 + 0x6e8, rax_3)

uint64_t* rsi = arg1 + 0x720

if (rbx s> *(rsi + 0xc))
    sub_1405c5570(rsi, rbx)

int32_t rax_5
int64_t r9
rax_5, r9 = (*(*(arg1 + 0x428) + 0x18))(arg1 + 0x428)
int32_t i = 0
uint32_t temp0 = divu.dp.d(0:rax_5, rbx + rax_3 + 1)
int32_t rbp_1 = 0
void* var_58

if (rax_3 != 0xffffffff)
    int32_t rsi_1 = 0
    
    do
        void* rcx_5 = *(arg1 + 0x20)
        var_58 = arg1 + 0x428
        int32_t var_50_1 = rsi_1
        uint32_t var_4c_1 = temp0
        int64_t* rcx_6 = *(rcx_5 + 0x10)
        r9.b = i == 0
        void* rax_9
        rax_9, r9 = (*(*rcx_6 + 0x710))(rcx_6, arg1, &var_58, r9, 0)
        rsi_1 += temp0
        int32_t rdx_6 = int.d(fconvert.t(*(rax_9 + 0x2b4)))
        int32_t rcx_7 = int.d(fconvert.t(*(rax_9 + 0x2bc)))
        int32_t var_40 = rdx_6
        int32_t r8_2 = int.d(fconvert.t(*(rax_9 + 0x2b8)))
        int32_t var_38_1 = rcx_7 + rdx_6
        int32_t var_3c_1 = r8_2
        int32_t var_34_1 = int.d(fconvert.t(*(rax_9 + 0x2c0))) + r8_2
        sub_14105ade0(rax_9 + 0x250, &var_40)
        int64_t rbp_2 = sx.q(r14[1].d)
        int32_t rax_10 = (rbp_2 + 1).d
        r14[1].d = rax_10
        
        if (rax_10 s> *(r14 + 0xc))
            sub_1405a4d70(r14)
        
        *(*r14 + (rbp_2 << 3)) = rax_9
        
        if (i != 0)
            void* rax_12 = *r14
            int64_t rbp_3 = sx.q(*(arg1 + 0x6f0))
            int32_t rax_13 = (rbp_3 + 1).d
            *(arg1 + 0x6f0) = rax_13
            
            if (rax_13 s> *(arg1 + 0x6f4))
                sub_1405a4d70(arg1 + 0x6e8)
            
            *(*(arg1 + 0x6e8) + (rbp_3 << 3)) = *(rax_12 + (sx.q(i) << 3))
        
        i += 1
    while (i u< rax_3 + 1)
    
    void* var_68_1
    var_68_1.d = rsi_1
    r15 = 0
    rbp_1 = var_68_1.d
    rsi = arg1 + 0x720

if (rbx != 0)
    do
        int32_t var_50_2 = rbp_1
        var_58 = arg1 + 0x428
        uint32_t var_4c_2 = temp0
        r9.b = r15 == 0
        int64_t* rcx_15 = *(*(arg1 + 0x20) + 0x10)
        int64_t rax_19
        rax_19, r9 = (*(*rcx_15 + 0x710))(rcx_15, arg1, &var_58, r9, 1)
        int64_t rbx_1 = sx.q(rsi[1].d)
        rbp_1 += temp0
        int32_t rcx_16 = (rbx_1 + 1).d
        rsi[1].d = rcx_16
        
        if (rcx_16 s> *(rsi + 0xc))
            sub_1405a4d70(rsi)
        
        r15 += 1
        *(*rsi + (rbx_1 << 3)) = rax_19
    while (r15 u< rbx)

int64_t result = sub_141027b40(**r14)

if (data_1439c79e0 != 0)
    result = sub_141027b40(**rsi)

__security_check_cookie(rax_1 ^ &var_98)
return result
