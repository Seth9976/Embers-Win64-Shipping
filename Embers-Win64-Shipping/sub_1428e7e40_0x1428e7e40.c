// 函数: sub_1428e7e40
// 地址: 0x1428e7e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* rax = sub_1428a3930(arg1)
int32_t rdi = sub_142898c70(*(arg1 + 0x100))
int32_t rax_2 = sub_1428e7350(rax)
int32_t rbx = 0

if (rax_2 s< 0)
    rax_2 = 0

if (rdi s< 0)
    rdi = 0

if (rax_2 s<= 0x7fffffff - rdi)
    int32_t rdi_1 = rdi + rax_2
    int32_t r15_1 = sub_142898c70(arg2[1])
    int32_t rax_4 = sub_142898c70(*arg2)
    
    if (rax_4 s< 0)
        rax_4 = 0
    
    if (r15_1 s< 0)
        r15_1 = 0
    
    if (rax_4 s<= 0x7fffffff - r15_1
            && (rdi_1 s<= 0 || rax_4 + r15_1 s<= divs.dp.d(0:0x100000, rdi_1)))
        int32_t result
        
        if (sub_1428e7350(rax) s> 0)
            int32_t var_28 = 4
            int64_t* var_20_1 = rax
            result = sub_1428e84b0(&var_28, arg2)
            
            if (result != 0)
                return result
            
            var_28 = 1
            int32_t i_2 = sub_1428e73d0(rax, result + 0x30, result - 1)
            int32_t i_1 = i_2
            
            if (i_2 != 0xffffffff)
                int32_t i
                
                do
                    void* rax_8 = sub_1428e7030(sub_1428e7380(rax, i_1))
                    void* var_20_2 = rax_8
                    
                    if (*(rax_8 + 4) != 0x16)
                        return 0x35
                    
                    result = sub_1428e84b0(&var_28, arg2)
                    
                    if (result != 0)
                        return result
                    
                    i = sub_1428e73d0(rax, result + 0x30, i_1)
                    i_1 = i
                while (i != 0xffffffff)
        
        if (sub_142898c70(*(arg1 + 0x100)) s<= 0)
            return 0
        
        while (true)
            result = sub_1428e84b0(sub_142898ea0(*(arg1 + 0x100), rbx), arg2)
            
            if (result != 0)
                return result
            
            rbx += 1
            
            if (rbx s>= sub_142898c70(*(arg1 + 0x100)))
                return 0

return 1
