// 函数: sub_1427e59d0
// 地址: 0x1427e59d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[5]
int64_t* rax_1 = (*(*rcx + 0x50))(rcx)

if (arg1[6] != 0)
    int64_t r9_1 = *rax_1
    char* str1
    
    if ((*(r9_1 + 0x10))(rax_1, "RigidBodyFlags", &str1, r9_1) != 0)
        char* rax_3
        int64_t r8_2
        rax_3, r8_2 = strstr(str1, "eKINEMATIC")
        
        if (rax_3 != 0)
            int64_t* rcx_3 = arg1[6]
            r8_2.b = 1
            (*(*rcx_3 + 0x168))(rcx_3, 1, r8_2)

sub_1427ddd30(arg1, arg1[6])
jump(*(*rax_1 + 0x88))
