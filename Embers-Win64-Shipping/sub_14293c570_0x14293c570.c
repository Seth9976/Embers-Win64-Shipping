// 函数: sub_14293c570
// 地址: 0x14293c570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)

if (*arg2 != 1)
    sub_1428a5670(0x2e, 0xb2, 0xb5, "crypto\cms\cms_kari.c", 0x175)
    return 0

void* rsi = *(arg2 + 8)
int32_t* rbp = *(rsi + 0x20)
int64_t* r13 = *(rsi + 0x30)
void* r15 = *(*(arg1 + 8) + 0x18)
int32_t* r12 = *(r15 + 0x18)
int32_t rax_2 = sub_140611e60(r12)
int32_t rbx = 0
int32_t var_48

if (sub_140687ad0(r13) == 0)
    int32_t* rax_9
    
    if (sub_1428912b0(r12) == 0x2c)
        rax_9 = sub_1428b17d0()
    else if (rax_2 s<= 0x10)
        rax_9 = sub_142895df0()
    else if (rax_2 s> 0x18)
        rax_9 = sub_142895f80()
    else
        rax_9 = sub_142895ec0()
    
    var_48.q = 0
    
    if (sub_142892d80(r13, rax_9, nullptr, 0, nullptr) != 0)
        goto label_14293c695
else if ((sub_142890eb0(sub_140687ad0(r13)) & 0xf0007) == 0x10002)
label_14293c695:
    int32_t* rdi_1 = *(rsi + 8)
    int64_t rax_11
    
    if (*rdi_1 == 0xffffffff)
        *rdi_1 = 2
        rax_11 = sub_1428db530(&data_14353c800)
        *(rdi_1 + 8) = rax_11
    
    if ((*rdi_1 != 0xffffffff || rax_11 != 0) && sub_14293c180(arg2, 0) != 0)
        if (sub_142898c70(rbp) s<= 0)
            return 1
        
        while (true)
            void* rax_14 = sub_142898ea0(rbp, rbx)
            
            if (sub_1428bd610(*(rsi + 0x28), *(rax_14 + 0x10)) s<= 0)
                return 0
            
            var_48.q = rsi
            int64_t arg_10
            int64_t arg_18
            
            if (sub_14293c760(&arg_18, &arg_10, *(r15 + 0x20), (*(r15 + 0x28)).d, var_48, 1) == 0)
                return 0
            
            sub_1428f2e40(*(rax_14 + 8), arg_18, arg_10.d)
            rbx += 1
            
            if (rbx s>= sub_142898c70(rbp))
                return 1
return 0
