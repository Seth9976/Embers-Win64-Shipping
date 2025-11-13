// 函数: sub_142c7e210
// 地址: 0x142c7e210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg1
SOCKET rbp = arg1[0x47]
SOCKET r15 = arg1[0x48]
*arg2 = 0
int64_t rax
int64_t r8
rax, r8 = sub_142c81db0(rdi)
int64_t r8_1
int512_t zmm2
r8_1, zmm2 = sub_142c64850(rdi, "Checking for server connect\n", r8, arg3)

if (rax s< 0)
    sub_142c64760(rdi, "Accept timeout occurred while waiting server connect", r8_1, zmm2)
    return 0xc

char* rax_2

if (arg1[0xd4] != 0)
    rax_2 = arg1[0xd3]

int32_t arg_8
void arg_10

if (arg1[0xd4] == 0 || rax_2 == 0 || *rax_2 s<= 0x33)
    int32_t rax_3
    int64_t r8_3
    rax_3, r8_3 = sub_142c64080(rbp, r15, -1, 0)
    
    if (rax_3 != 0xffffffff)
        if (rax_3 != 0)
            if ((rax_3.b & 8) != 0)
                sub_142c64850(rdi, "Ready to accept data connection from server\n", r8_3, zmm2)
                *arg2 = 1
            else if ((rax_3.b & 1) != 0)
                sub_142c7df50(&arg_10, arg1, &arg_8, 
                    sub_142c64850(rdi, "Ctrl conn has data while waiting for data conn\n", r8_3, 
                        zmm2))
                
                if (arg_8 s/ 0x64 s> 3)
                    return 0xa
                
                return 8
        
        return 0
    
    sub_142c64760(rdi, "Error while waiting for server connect", r8_3, zmm2)
else
    sub_142c7df50(&arg_10, arg1, &arg_8, 
        sub_142c64850(rdi, "There is negative response in cache while serv connect\n", r8_1, zmm2))
return 0xa
