// 函数: sub_1428d5670
// 地址: 0x1428d5670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
void* result = nullptr
int64_t* rbp = nullptr
int64_t* rdi = nullptr
int64_t* rsi = nullptr
int64_t* r12 = nullptr
int64_t* r15 = nullptr

if (arg1 != 0)
    void* result_1 = sub_1428c1750()
    result = result_1
    
    if (result_1 != 0)
        int64_t* rcx = *(arg1 + 8)
        int64_t rax_1 = *(arg1 + 0x18)
        
        if (rcx != 0)
            if (rax_1 != 0 && *(arg1 + 0x10) != 0)
                rbp = sub_1428900c0(rcx)
                rsi = sub_1428900c0(*(arg1 + 0x18))
                int64_t* rax_5 = sub_1428900c0(*(arg1 + 0x10))
                rdi = rax_5
                
                if (rbp != 0 && rsi != 0 && rax_5 != 0
                        && sub_1428c1a70(result, rbp, rax_5, rsi) != 0)
                    goto label_1428d5787
        else if (rax_1 == 0 && *(arg1 + 0x10) == 0)
        label_1428d5787:
            int64_t* rcx_10 = *(arg1 + 0x20)
            
            if (rcx_10 == 0)
                rbp = nullptr
                rdi = nullptr
                rsi = nullptr
                
                if (*(arg1 + 0x28) == 0)
                    return result
            else
                int64_t* rax_7 = sub_1428900c0(rcx_10)
                rbp = nullptr
                rdi = nullptr
                rsi = nullptr
                r12 = rax_7
                
                if (rax_7 != 0)
                    int64_t* rcx_11 = *(arg1 + 0x28)
                    int64_t* rax_8
                    
                    if (rcx_11 != 0)
                        rax_8 = sub_1428900c0(rcx_11)
                        r15 = rax_8
                    
                    if (rcx_11 == 0 || rax_8 != 0)
                        sub_1428c1a10(result, r12, r15)
                        return result

sub_1428901a0(rbp)
sub_1428901a0(rsi)
sub_1428901a0(rdi)
sub_1428901a0(r12)
sub_1428901a0(r15)
sub_1428c1620(result)
return nullptr
