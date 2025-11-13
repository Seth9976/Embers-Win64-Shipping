// 函数: sub_142962e60
// 地址: 0x142962e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

__chkstk(0x20)
int64_t i_1 = arg3
uint64_t rbp_2 = arg4 u>> 3
char* rbx_1 = arg2

while (true)
    int64_t rdx = 0
    
    if (rbp_2 != 0)
        do
            if (i_1 == 0)
                return 
            
            uint64_t rax = arg1[rdx]
            
            if (i_1 u< 8)
                if (i_1 != 0)
                    int64_t i
                    
                    do
                        *rbx_1 = rax.b
                        rbx_1 = &rbx_1[1]
                        rax u>>= 8
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                
                return 
            
            *rbx_1 = rax.b
            i_1 -= 8
            rbx_1[1] = (rax u>> 8).b
            rdx += 1
            rbx_1[2] = (rax u>> 0x10).b
            rbx_1[3] = (rax u>> 0x18).b
            rbx_1[4] = (rax u>> 0x20).b
            rbx_1[5] = (rax u>> 0x28).b
            rbx_1[6] = (rax u>> 0x30).b
            rbx_1[7] = (rax u>> 0x38).b
            rbx_1 = &rbx_1[8]
        while (rdx u< rbp_2)
    
    if (i_1 == 0)
        break
    
    sub_1429625b0(arg1)
