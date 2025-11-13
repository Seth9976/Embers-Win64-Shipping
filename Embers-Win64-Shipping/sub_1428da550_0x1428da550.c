// 函数: sub_1428da550
// 地址: 0x1428da550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)
void* result_1 = nullptr
sub_1428d8e50(arg4)
int64_t* r14 = sub_1428d8ba0(arg4)
int64_t* rsi = sub_1428d8ba0(arg4)
int64_t* r13 = sub_1428d8ba0(arg4)
int64_t* rax_3 = sub_1428d8ba0(arg4)
int64_t* r12 = sub_1428d8ba0(arg4)
int64_t* rdi = sub_1428d8ba0(arg4)

if (sub_1428d8ba0(arg4) == 0)
    goto label_1428da7f1

void* result_2 = arg1

if (result_2 == 0)
    result_2 = sub_142890500()

result_1 = result_2

if (result_2 == 0)
    goto label_1428da7f1

sub_142890900(r13, 1)
sub_142890900(rdi, 0)

if (sub_142890040(rsi, arg2) == 0)
    goto label_1428da7f1

void* const result = nullptr

if (sub_142890040(r14, arg3) == 0)
    goto label_1428da7f3

r14[2].d = 0
int32_t rax_9

if (rsi[2].d == 0)
    rax_9 = sub_1428909a0(rsi, r14)

void var_58
int32_t rax_10

if (rsi[2].d != 0 || rax_9 s>= 0)
    sub_142890e40(&var_58)
    sub_142890a00(&var_58, rsi, 4)
    rax_10 = sub_1429084c0(rsi, &var_58, r14, arg4)

if ((rsi[2].d != 0 || rax_9 s>= 0) && rax_10 == 0)
    goto label_1428da7f3

int32_t rbp_1 = -1
int64_t* rsi_1

if (sub_142890300(rsi) != 0)
label_1428da74d:
    rsi_1 = arg3
    
    if (sub_1428d9010(rdi, rsi_1, rdi) == 0)
        goto label_1428da7f1
else
    while (true)
        sub_142890e40(&var_58)
        sub_142890a00(&var_58, r14, 4)
        
        if (sub_14291a950(rax_3, r12, &var_58, rsi, arg4) == 0)
            goto label_1428da7ec
        
        int64_t* rbx = r14
        r14 = rsi
        rsi = r12
        
        if (sub_1428d9290(rbx, rax_3, r13, arg4) == 0)
            goto label_1428da7ec
        
        if (sub_1428d8f70(rbx, rbx, rdi) == 0)
            goto label_1428da7ec
        
        r12 = rdi
        rdi = r13
        rbp_1 = neg.d(rbp_1)
        r13 = rbx
        
        if (sub_142890300(rsi) != 0)
            if (rbp_1 s>= 0)
                rsi_1 = arg3
                break
            
            result_1 = result_2
            goto label_1428da74d

if (sub_1428902b0(r14) == 0)
    sub_1428a5670(3, 0x8b, 0x6c, "crypto\bn\bn_gcd.c", 0x265)
label_1428da7ec:
    result_1 = result_2
label_1428da7f1:
    result = nullptr
label_1428da7f3:
    
    if (arg1 == 0)
        sub_1428901a0(result_1)
else
    int32_t rax_18
    
    if (rdi[2].d == 0)
        rax_18 = sub_1428909a0(rdi, rsi_1)
    
    bool cond:0_1
    
    if (rdi[2].d != 0 || rax_18 s>= 0)
        result_1 = result_2
        cond:0_1 = sub_1429084c0(result_1, rdi, rsi_1, arg4) == 0
    else
        result_1 = result_2
        cond:0_1 = sub_142890040(result_1, rdi) == 0
    
    if (cond:0_1)
        goto label_1428da7f1
    
    result = result_1

sub_1428d8a60(arg4)
return result
