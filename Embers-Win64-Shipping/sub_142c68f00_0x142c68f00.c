// 函数: sub_142c68f00
// 地址: 0x142c68f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rbx = arg2
int64_t r15
r15.b = 0
void* str1 = data_143ccb8b0()

if (str1 == 0)
    return str1

char* rax = strstr(str1, "//")
void* string = &rax[2]

if (rax == 0)
    string = str1

if (*rbx != 0x2f)
    int32_t i = 0
    char* rax_1 = strchr(string, 0x3f)
    
    if (rax_1 != 0)
        *rax_1 = 0
    
    if (*rbx != 0x3f)
        char* rax_2 = strrchr(string, 0x2f)
        
        if (rax_2 != 0)
            *rax_2 = 0
    
    char* rax_3 = strchr(string, 0x2f)
    string = &rax_3[1]
    
    if (rax_3 == 0)
        string = nullptr
    
    if (*rbx == 0x2e)
        if (rbx[1] == 0x2f)
            rbx = &rbx[2]
        
        if (*rbx == 0x2e)
            while (rbx[1] == 0x2e)
                if (rbx[2] != 0x2f)
                    break
                
                rbx = &rbx[3]
                i += 1
                
                if (*rbx != 0x2e)
                    break
    
    if (string != 0 && i != 0)
        do
            i -= 1
            char* rax_4 = strrchr(string, 0x2f)
            
            if (rax_4 == 0)
                *string = 0
                break
            
            *rax_4 = 0
        while (i != 0)
else if (rbx[1] != 0x2f)
    char* rax_5 = strchr(string, 0x2f)
    char* rdi_1 = rax_5
    
    if (rax_5 == 0)
        char* rax_7 = strchr(string, 0x3f)
        
        if (rax_7 != 0)
            *rax_7 = 0
    else
        char* rax_6 = strchr(string, 0x3f)
        
        if (rax_6 != 0 && rax_6 u< rdi_1)
            rdi_1 = rax_6
        
        *rdi_1 = 0
else
    *string = 0
    rbx = &rbx[2]
    r15.b = 1

r15.b ^= 1
void* rax_8 = sub_142c69df0(rbx, r15.b)
char* rdi_2 = -ffffffffffffffff

do
    rdi_2 = &rdi_2[1]
while (*(rdi_2 + str1) != 0)

char* rax_9 = data_143ccb898(rax_8 + 2 + rdi_2)

if (rax_9 == 0)
    data_143ccb8a0(str1)
    return nullptr

memcpy(rax_9, str1, rdi_2.d)
char rax_11 = *rbx

if (rax_11 != 0x2f && (string == 0 || *string != 0) && rax_11 != 0x3f)
    *(rax_9 + rdi_2) = 0x2f
    rdi_2 = &rdi_2[1]

sub_142c69d10(rax_9 + rdi_2, rbx, r15.b, arg3)
data_143ccb8a0(str1)
return rax_9
