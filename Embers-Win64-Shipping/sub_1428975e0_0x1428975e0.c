// 函数: sub_1428975e0
// 地址: 0x1428975e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x48)
int64_t* rbp = nullptr
int64_t* rbx

if (arg2 != 0)
    rbx = arg2
else
    int64_t* rax_1 = sub_1428d8d60()
    rbx = rax_1
    
    if (rax_1 == 0)
        return rax_1

sub_1428d8e50(rbx)
int64_t* rax_2 = sub_1428d8ba0(rbx)
int64_t* rdi = rax_2

if (rax_2 != 0)
    rdi = *(arg1 + 0x20)
    
    if (rdi != 0)
    label_14289777a:
        int64_t* rax_10 = sub_142890500()
        
        if (rax_10 != 0)
            sub_142890a00(rax_10, *(arg1 + 0x18), 4)
            int32_t var_48
            var_48.q = *(*(arg1 + 8) + 0x30)
            rbp = sub_1428d6850(nullptr, rdi, rax_10, rbx, var_48, *(arg1 + 0x78))
            sub_1428901a0(rax_10)
            
            if (rbp != 0)
                sub_1428d6e30(rbp)
            else
                sub_1428a5670((rbp + 4).d, 0x88, (rbp + 3).d, "crypto\rsa\rsa_crpt.c", 0x9b)
        else
            sub_1428a5670((rax_10 + 4).d, 0x88, (rax_10 + 0x41).d, "crypto\rsa\rsa_crpt.c", 0x90)
    else
        int64_t* r14_1 = *(arg1 + 0x28)
        rdi = nullptr
        
        if (r14_1 == 0)
            sub_1428a5670(4, 0x88, 0x8c, "crypto\rsa\rsa_crpt.c", 0x85)
        else
            int64_t* r12_1 = *(arg1 + 0x30)
            
            if (r12_1 == 0)
                sub_1428a5670(4, 0x88, 0x8c, "crypto\rsa\rsa_crpt.c", 0x85)
            else
                int64_t* r13_1 = *(arg1 + 0x38)
                
                if (r13_1 == 0)
                    sub_1428a5670(4, 0x88, 0x8c, "crypto\rsa\rsa_crpt.c", 0x85)
                else
                    sub_1428d8e50(rbx)
                    int64_t* rax_3 = sub_1428d8ba0(rbx)
                    int64_t* rax_4 = sub_1428d8ba0(rbx)
                    int64_t* rax_5 = sub_1428d8ba0(rbx)
                    
                    if (rax_5 != 0 && sub_1428d9010(rax_4, r12_1, &data_1434e8ea8) != 0
                            && sub_1428d9010(rax_5, r13_1, &data_1434e8ea8) != 0
                            && sub_1428d9290(rax_3, rax_4, rax_5, rbx) != 0)
                        rdi = sub_1428da4f0(nullptr, r14_1, rax_3, rbx)
                    
                    sub_1428d8a60(rbx)
                    
                    if (rdi != 0)
                        goto label_14289777a
                    
                    sub_1428a5670(4, 0x88, 0x8c, "crypto\rsa\rsa_crpt.c", 0x85)
else
    sub_1428a5670((rax_2 + 4).d, 0x88, (rax_2 + 0x41).d, "crypto\rsa\rsa_crpt.c", 0x7e)

sub_1428d8a60(rbx)

if (rbx != arg2)
    sub_1428d8ae0(rbx)

if (rdi != *(arg1 + 0x20))
    sub_1428901a0(rdi)

return rbp
