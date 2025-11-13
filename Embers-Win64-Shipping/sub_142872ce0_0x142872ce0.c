// 函数: sub_142872ce0
// 地址: 0x142872ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* rbx = nullptr
int64_t* arg_10 = nullptr
void* rax = sub_1428654a0(arg1)

if (rax != 0)
    if ((*(rax + 8) & 3) == 2)
        int64_t* rax_2 = sub_1428968f0()
        arg_10 = rax_2
        
        if (rax_2 != 0)
            bool cond:0_1 = sub_142896cb0(rax_2, *rax) != 0
            rax_2 = arg_10
            
            if (cond:0_1)
                return rax_2
        
        sub_1428965a0(rax_2)
        return 0
    
    int64_t* rax_5 = sub_1428bcf50(0x198, nullptr)
    rbx = rax_5
    
    if (rax_5 != 0 && sub_1428c2d40(rax_5) s> 0
            && sub_1428bcb30(rbx, 0x198, 6, 0x1001, *rax, 0) s> 0
            && sub_1428c2c20(rbx, &arg_10) s<= 0)
        sub_1428965a0(arg_10)
        arg_10 = nullptr

sub_1428bcda0(rbx)
return arg_10
