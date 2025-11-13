// 函数: sub_14289da60
// 地址: 0x14289da60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

__chkstk(0x20)
int32_t rax_1 = *(arg1 + 0x88)
*(arg1 + 0x88) -= 1

if (rax_1 s> 1)
    return 

int32_t* rbp_1 = *(arg1 + 0x10)
int32_t rdi_1 = 0

if (sub_142898c70(rbp_1) s> 0)
    int32_t rax_6
    
    do
        void* rax_3 = sub_142898ea0(rbp_1, rdi_1)
        void* rcx_2 = *(rax_3 + 8)
        
        if (rcx_2 != 0)
            int64_t rax_4 = *(rcx_2 + 0x20)
            
            if (rax_4 != 0)
                rax_4(rax_3)
                rcx_2 = *(rax_3 + 8)
            
            if (rcx_2 != 0)
                int64_t rax_5 = *(rcx_2 + 0x10)
                
                if (rax_5 != 0)
                    rax_5(rax_3)
        
        sub_1428a6780(rax_3)
        rdi_1 += 1
        rax_6 = sub_142898c70(rbp_1)
    while (rdi_1 s< rax_6)

sub_142898a10(rbp_1)
sub_142898cb0(*(arg1 + 8), sub_14289d0f0)
sub_1428a5f50(4, arg1, arg1 + 0x80)
sub_1428ab200(*(arg1 + 0x18))
sub_1428a5ba0(*(arg1 + 0x90))
sub_1428a6780(arg1)
