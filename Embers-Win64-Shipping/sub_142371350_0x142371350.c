// 函数: sub_142371350
// 地址: 0x142371350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
char* result = sub_140d21d80(arg1)

if (((*(result + 0x50) u>> 0x1e).b & 1) == 0)
    void* rax = sub_1425a2740()
    void* rdx_2 = arg1[2]
    int64_t rax_1 = sx.q(*(rax + 0x38))
    
    if (rax_1.d s<= *(rdx_2 + 0x38))
        result = *(rdx_2 + 0x30)
    
    if (rax_1.d s> *(rdx_2 + 0x38) || *(result + (rax_1 << 3)) != rax + 0x30)
        char i = *(arg1 + 0x16c)
        
        if (i == 0)
            void* rax_2 = arg1[5]
            
            do
                if (rax_2 == 0)
                    if (i == 0)
                        int32_t rdx_3 = data_143f59398
                        
                        if (rdx_3 s>= 0)
                            i = 3
                            
                            if (rdx_3 s< 3)
                                i = rdx_3.b
                    
                    break
                
                i = *(rax_2 + 0x55)
                rax_2 = *(rax_2 + 0xb0)
            while (i == 0)
        
        int32_t i_1 = 0
        uint64_t i_2 = zx.q(i)
        *(arg1 + 0x1e4) = i
        
        if (i == 0xff)
            i_2 = 0
        
        char rax_4
        
        if (sub_141e644e0() == 0)
            rax_4 = 0
        else if (sub_14236bfb0(arg1, nullptr) == 0)
            rax_4 = 0
        else
            rax_4 = 1
        
        char var_80
        
        if (rax_4 != 0)
            char rcx_3 = *(arg1 + 0x16c)
            
            if (rcx_3 == 0)
                int32_t rdx_4 = data_143f59398
                
                if (rdx_4 s>= 0)
                    rcx_3 = 3
                    
                    if (rdx_4 s< 3)
                        rcx_3 = rdx_4.b
            
            if (i_2.b != rcx_3)
                if (i_2.b != 1)
                    sub_142371f90(arg1)
                    
                    if (i_2.b == 2)
                        void* rax_6 = arg1[0x5d]
                        
                        if (rax_6 != 0 && *(rax_6 + 0x18) u> 1)
                            int64_t* rax_8 = sub_1405f7040(sub_141f88540())
                            int64_t var_58_1 = 0
                            void** const var_48_1 = &data_142d42d18
                            var_80 = 0
                            int64_t (* var_68)() = sub_140594850
                            (*(*rax_8 + 0xe8))(rax_8, arg1, 1, &var_68, 0xff, 0)
                else
                    sub_142374470(arg1, 0)
        
        char rax_9
        int64_t rcx_8
        rax_9, rcx_8 = sub_14236bfb0(arg1, nullptr)
        *(arg1 + 0x16b) &= 0xfd
        *(arg1 + 0x16b) |= rax_9 * 2
        rcx_8.b = 1
        int64_t* rax_10 = sub_140b1b3f0()
        
        if (rax_10 != 0)
            int64_t rdx_6 = *rax_10
            int64_t* rax_11 = (*(rdx_6 + 0x80))(rax_10, rdx_6)
            
            if (rax_11[1].d s> 0)
                int64_t* r14_1 = nullptr
                
                do
                    int64_t* rbx_1 = *(r14_1 + *rax_11)
                    int64_t r8_2 = *rbx_1
                    int64_t var_78
                    int64_t* rax_12 = (*(r8_2 + 0x38))(rbx_1, &var_78, r8_2)
                    int16_t* r15_1
                    
                    if (rax_12[1].d == 0)
                        r15_1 = &data_142d40450
                    else
                        r15_1 = *rax_12
                    
                    int64_t rdi_1 = *arg1
                    void arg_10
                    uint64_t rax_14 = (*(*rbx_1 + 0x160))(rbx_1, &arg_10, arg1)
                    char* rax_15 = sub_141e5f7c0(r15_1)
                    (*(rdi_1 + 0x330))(arg1, *rax_14, rax_15)
                    int64_t rcx_15 = var_78
                    
                    if (rcx_15 != 0)
                        sub_140a74f90(rcx_15)
                    
                    i_1 += 1
                    r14_1 = &r14_1[1]
                while (i_1 s< rax_11[1].d)
        
        if (sub_140d23dc0(arg1, 0x10) == 0)
            void* rcx_17 = data_143f5b298
            
            if (rcx_17 != 0)
                int64_t* rax_17
                int64_t r9_2
                rax_17, r9_2 = sub_1423ddb40(rcx_17)
                
                if (rax_17 == 0)
                    sub_140bceb20(&arg1[0x54])
                else
                    r9_2.b = 1
                    (*(*rax_17 + 0x40))(rax_17, arg1, 0, r9_2, 0, var_80)
        
        if (sub_14236bfb0(arg1, nullptr) != 0)
            int64_t* rax_20 = sub_1405f7040(sub_141f88540())
            int64_t r8_5 = *rax_20
            (*(r8_5 + 0x98))(rax_20, arg1, r8_5)
        
        void* rax_21 = arg1[0x5d]
        
        if (rax_21 == 0 || *(rax_21 + 0x18) s<= 0)
            i_2.b = 0
        else
            i_2.b = 1
        
        if (sub_141e644e0().b == 0)
            result.b = 0
        else if (sub_14236bfb0(arg1, nullptr).b == 0)
            result.b = 0
        else
            result.b = 1
        
        if (result.b != 0 && i_2.b != 0)
            return sub_1423601e0(arg1)

return result
