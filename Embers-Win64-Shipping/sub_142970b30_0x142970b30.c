// 函数: sub_142970b30
// 地址: 0x142970b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x58)
int64_t* rdi = arg3
int64_t* var_38 = nullptr
int32_t r12 = -1

if (sub_1428bf8a0(arg1, arg2) != 0)
    return 1

void* rax_2 = *arg1
int64_t* r15 = arg1[8]
int64_t r13 = *(rax_2 + 0x108)
int64_t rax_3 = *(rax_2 + 0x110)

if (rdi != 0)
label_142970bc8:
    sub_1428d8e50(rdi)
    int64_t* rax_5 = sub_1428d8ba0(rdi)
    int64_t* rax_6 = sub_1428d8ba0(rdi)
    int64_t* rax_7 = sub_1428d8ba0(rdi)
    int64_t* rax_8 = sub_1428d8ba0(rdi)
    
    if (rax_8 != 0 && rax_3(arg1, rax_5, arg2[2], rdi) != 0)
        int64_t* var_58_4
        int64_t* r8_11
        
        if (arg2[5].d != 0)
            if (sub_142908140(rax_5, rax_5, arg1[0xc], r15) != 0)
                var_58_4 = rdi
                
                if (r13(arg1, rax_5, rax_5, arg2[2], var_58_4) != 0)
                    r8_11 = arg1[0xd]
                label_142970d8c:
                    
                    if (sub_142908140(rax_5, rax_5, r8_11, r15) != 0
                            && rax_3(arg1, rax_6, arg2[3], rdi, var_58_4) != 0)
                        r12.b = sub_1428909a0(rax_6, rax_5) == 0
        else if (rax_3(arg1, rax_6, arg2[4], rdi) != 0 && rax_3(arg1, rax_7, rax_6, rdi) != 0
                && r13(arg1, rax_8, rax_7, rax_6, rdi) != 0)
            int32_t rax_15
            
            if (arg1[0xe].d == 0)
                if (r13(arg1, rax_6, rax_7, arg1[0xc], rdi) != 0)
                    rax_15 = sub_142908140(rax_5, rax_5, rax_6, r15)
                label_142970d0b:
                    
                    if (rax_15 != 0 && r13(arg1, rax_5, rax_5, arg2[2], rdi) != 0)
                        var_58_4 = rdi
                        
                        if (r13(arg1, rax_6, arg1[0xd], rax_8, var_58_4) != 0)
                            r8_11 = rax_6
                            goto label_142970d8c
            else if (sub_142908180(rax_6, rax_7, r15) != 0
                    && sub_142908140(rax_6, rax_6, rax_7, r15) != 0)
                rax_15 = sub_142908460(rax_5, rax_5, rax_6, r15)
                goto label_142970d0b
    
    sub_1428d8a60(rdi)
    sub_1428d8ae0(var_38)
else
    int64_t* rax_4 = sub_1428d8d60()
    var_38 = rax_4
    rdi = rax_4
    
    if (rax_4 != 0)
        goto label_142970bc8

return zx.q(r12)
