// 函数: sub_1406409d0
// 地址: 0x1406409d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_1424c7800()
int64_t* rdi = rax[0x23]

if (rdi == 0)
    int64_t rdx_1 = *rax
    (*(rdx_1 + 0x390))(rax, rdx_1)
    rdi = rax[0x23]
    
    if (rdi == 0)
        return sub_140627440(arg1) __tailcall

int64_t* result = sub_1417b0b00(rdi)
int64_t rsi
rsi.b = 0
int64_t* result_1 = result
int32_t i = 0

if (result[1].d s> 0)
    int64_t r9_2 = 0
    
    do
        result = arg1[4]
        
        if (*(*result_1 + r9_2 * 0x28 + 0x10) == result)
            rsi.b = 1
            result = sub_140638160(result_1, i, 1, 1)
            i = 0
            r9_2 = 0
        
        i += 1
        r9_2 += 1
    while (i s< result_1[1].d)
    
    if (rsi.b != 0)
        sub_14241ecf0(rdi, i.b)
        int64_t var_28 = 0
        int32_t i_3 = 0
        int32_t var_18_1 = 0xffffffff
        result = sub_140d3cc80(sub_142575670(), &var_28, 1, 0x10, 0)
        int32_t i_1 = i_3
        int32_t i_2 = var_18_1 + 1
        int64_t r8_4 = var_28
        int32_t i_4 = i_2
        
        if (i_2 s< i_1)
            do
                result = sx.q(i_2)
                
                if (*(r8_4 + (result << 3)) != 0)
                    break
                
                result = zx.q(i_2 + 1)
                i_4 = result.d
                i_2 = result.d
            while (result.d s< i_1)
        
        while (i_2 s>= 0)
            if (i_2 s>= i_1)
                break
            
            int64_t i_5 = sx.q(i_2)
            i_2.b = 1
            result = sub_14240ee90(*(r8_4 + (i_5 << 3)), i_2.b)
            i_1 = i_3
            i_2 = i_4 + 1
            r8_4 = var_28
            i_4 = i_2
            
            if (i_2 s< i_1)
                do
                    result = sx.q(i_2)
                    
                    if (*(r8_4 + (result << 3)) != 0)
                        break
                    
                    result = zx.q(i_2 + 1)
                    i_4 = result.d
                    i_2 = result.d
                while (result.d s< i_1)
        
        if (r8_4 != 0)
            result = sub_140a74f90(r8_4)

int64_t* rbx_1 = arg1[6]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, 1)

int64_t rcx_12 = arg1[2]

if (rcx_12 != 0)
    result = sub_140a74f90(rcx_12)

int64_t rcx_13 = *arg1

if (rcx_13 == 0)
    return result

return sub_140a74f90(rcx_13)
