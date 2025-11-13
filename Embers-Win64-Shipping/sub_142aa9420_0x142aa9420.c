// 函数: sub_142aa9420
// 地址: 0x142aa9420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = nullptr
int32_t i_8 = 0
char* rbx = arg1
void* var_28 = nullptr
int32_t i_9 = 0
void* var_20 = nullptr
sub_142aa92f0()
sub_142a860a0(&data_144016010)
char i = 0
uint64_t i_5
i_5.b = 0xff

do
    int64_t r8_1 = *(&data_144015f60 + (sx.q(i) << 3))
    
    if (r8_1 != 0)
        char* rax_2 = rbx
        uint32_t j
        uint32_t rdx
        
        do
            rdx = zx.d(*rax_2)
            j = zx.d(*(rax_2 + r8_1 - rbx))
            
            if (rdx != j)
                break
            
            rax_2 = &rax_2[1]
        while (j != 0)
        
        if (rdx - j == 0)
            i_5 = zx.q(i)
            
            if (i != 0xff)
                result = *(&data_144015f60 + (sx.q(i) << 3))
                *(result + 0xbc) += 1
            
            break
    
    i += 1
while (i s< 0xa)

sub_142aa92f0()
sub_142a860d0(&data_144016010)

if (i_5.b == 0xff)
    sub_142aa8860(rbx, &var_28, &i_8, &var_20, &i_9, arg2)
    
    if (*arg2 s> 0)
        return nullptr
    
    sub_142aa92f0()
    sub_142a860a0(&data_144016010)
    result.b = 0
    
    while (true)
        int64_t r8_4 = *(&data_144015f60 + (sx.q(result.b) << 3))
        uint32_t i_1
        uint32_t rdx_3
        
        if (r8_4 != 0)
            void* rax_6 = rbx
            
            do
                rdx_3 = zx.d(*rax_6)
                i_1 = zx.d(*(rax_6 + r8_4 - rbx))
                
                if (rdx_3 != i_1)
                    break
                
                rax_6 += 1
            while (i_1 != 0)
        
        if (r8_4 == 0 || rdx_3 - i_1 != 0)
            result.b += 1
            
            if (result.b s< 0xa)
                continue
        else if (result.b != 0xff)
            int64_t i_6 = sx.q(i_8)
            void* rbp_1 = var_28
            
            if (i_6 s> 0)
                int64_t* rbx_1 = rbp_1 + 8
                int64_t i_2
                
                do
                    if ((*(rbx_1 + 0xc) & 1) != 0)
                        sub_142a7dcd0(*rbx_1)
                    
                    rbx_1 = &rbx_1[3]
                    i_2 = i_6
                    i_6 -= 1
                while (i_2 != 1)
            
            sub_142a7dcd0(rbp_1)
            int64_t i_7 = sx.q(i_9)
            void* rbp_2 = var_20
            
            if (i_7 s> 0)
                int64_t* rbx_2 = rbp_2 + 8
                int64_t i_3
                
                do
                    if ((*(rbx_2 + 0xc) & 1) != 0)
                        sub_142a7dcd0(*rbx_2)
                    
                    rbx_2 = &rbx_2[3]
                    i_3 = i_7
                    i_7 -= 1
                while (i_3 != 1)
            
            sub_142a7dcd0(rbp_2)
            result = *(&data_144015f60 + (sx.q(result.b) << 3))
            *(result + 0xbc) += 1
            break
        
        void* rcx_1 = *(&data_144015f60 + (sx.q(data_144015f58) << 3))
        
        if (rcx_1 != 0)
            int32_t temp2_1 = *(rcx_1 + 0xbc)
            *(rcx_1 + 0xbc) -= 1
            
            if (temp2_1 == 1)
                sub_142aa91b0(rcx_1)
        
        void* result_1 = sub_142a7dd00(0xc0)
        int64_t rdx_5 = sx.q(data_144015f58)
        result = result_1
        *(&data_144015f60 + (rdx_5 << 3)) = result_1
        char* rax_8 = result_1 - rbx
        char i_4
        
        do
            i_4 = *rbx
            *(rax_8 + rbx) = i_4
            rbx = &rbx[1]
        while (i_4 != 0)
        *(result + 0xa0) = var_28
        *(result + 0xa8) = i_8
        *(result + 0xb0) = var_20
        *(result + 0xb8) = i_9
        *(result + 0xbc) = 2
        data_144015f58 = rdx_5.b + 1 - (zx.q((sx.d(rdx_5.b) + 1) s/ 0xa) * 5).b * 2
        sub_142a7db20(9, sub_142aaa230)
        break
    
    TEB* gsbase
    
    if (data_144016060
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_144016060)
        
        if (data_144016060 == 0xffffffff)
            memset(&data_144016010, 0, 0x50)
            _Mtx_init_in_situ(&data_144016010, 2)
            atexit(sub_142d160a0)
            _Init_thread_footer(&data_144016060)
    
    sub_142a860d0(&data_144016010)

return result
